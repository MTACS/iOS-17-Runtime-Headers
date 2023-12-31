
@interface TSKStarRatingViewRenderer : NSObject

+ (struct CGPath { }*)newStarPath:(double)arg1;
+ (void)renderRating:(long long)arg1 intoContext:(struct CGContext { }*)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 style:(int)arg4 showDots:(bool)arg5 color:(id)arg6;

- (id)init;

@end
