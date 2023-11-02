
@interface CAMView : NSObject

+ (void)animateIfNeededWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)animateIfNeededWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateIfNeededWithDuration:(double)arg1 options:(unsigned long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateIfNeededWithDuration:(double)arg1 usingSpringWithDamping:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)ceilBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 andRoundCenter:(struct CGPoint { double x1; double x2; }*)arg2 toViewScale:(id)arg3;
+ (void)convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCeiledBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 andRoundedCenter:(struct CGPoint { double x1; double x2; }*)arg3 toViewScale:(id)arg4;
+ (void)rotateView:(id)arg1 toInterfaceOrientation:(long long)arg2 animated:(bool)arg3;
+ (void)setBorderColor:(id)arg1 forView:(id)arg2;
+ (void)setBorderColor:(id)arg1 width:(double)arg2 forView:(id)arg3;
+ (void)setBorderForView:(id)arg1;

@end
