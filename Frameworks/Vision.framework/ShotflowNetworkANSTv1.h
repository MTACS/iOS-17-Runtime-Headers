
@interface ShotflowNetworkANSTv1 : ShotflowNetworkANODBase

+ (bool)hasPose;
+ (const void*)importantClasses;
+ (bool)inputBGR;
+ (struct tuple<float, float, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; })inputBiasRGB;
+ (struct CGSize { double x1; double x2; })inputImageSize;
+ (id)inputLayerName;
+ (float)inputScale;
+ (id)modelName;
+ (unsigned long long)mumberPosClasses;

- (void)initializeBuffers;
- (id)processVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;

@end
