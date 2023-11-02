
@interface TMLTypes : NSObject

+ (id)convertOffset:(struct UIOffset { double x1; double x2; })arg1;
+ (id)convertPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)convertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)convertSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)isNil:(id)arg1;

@end
