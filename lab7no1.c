double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
}
/*
a) functionM(); ✅ ถูก ไม่รับ parameter return ค่า double ไม่รับก็ไม่ผิด
b) a = functionM(); ❌ ผิด functionM() return double แต่ a เป็น int
c) b = functionN(a, b);  ❌ ผิด b เป็น int  ต้องเป็น double
d) r = functionO(r,a,s,b); ✅ ถูก parameter กับที่ส่งไป ชนิดเดียวกัน
e) s = functionP(a,b,c,d,e); ❌ ผิด จำนวน parameter เกิน
f) u = functionM(); g) ✅ ถูก functionM() return double u เป็น double 
c = d + functionN(r,s); ❌ ผิด r เป็น double ❌ ควรเป็น int ตาม parameter 
h) t = s * functionO(r, a, r, a); ✅ ถูก functionO return double และ s เป็น double คูณกันได้
i) a = v + functionP(r, s, t, t); ❌ ผิด ไม่ตรง r, s, t, t parameter ซักตัว
j) functionP(functionN(a, a), s, t, t+r); ❌ ผิด functionN(a, a) 2 ต้องเป็น double แต่ a เป็น int และ parameter ของ functionP เป็น int แต่ s, t, t+r เป็น double 
k) v = functionP(functionN(a, a), s, t, t+r); ❌ ผิดเหมือนข้อ j return type ถูก double v แต่ parameter ผิดหมด
*/
