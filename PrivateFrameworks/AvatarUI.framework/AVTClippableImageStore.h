
@interface AVTClippableImageStore : AVTImageStore

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resourceClippingRectForItem:(id)arg1 scope:(id)arg2;
- (bool)saveImage:(id)arg1 forItem:(id)arg2 scope:(id)arg3 clippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 error:(id*)arg5;

@end
