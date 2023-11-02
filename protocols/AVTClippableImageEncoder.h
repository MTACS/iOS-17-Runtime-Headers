
@protocol AVTClippableImageEncoder <AVTImageEncoder>

@required

- (NSData *)dataFromImage:(UIImage *)arg1 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
