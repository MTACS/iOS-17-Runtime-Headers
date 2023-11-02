
@interface ShotflowNetworkANODv3 : ShotflowNetworkANODBase

+ (bool)hasPose;
+ (const void*)importantClasses;
+ (bool)inputBGR;
+ (struct tuple<float, float, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; })inputBiasRGB;
+ (id)inputLayerName;
+ (float)inputScale;
+ (id)modelName;
+ (unsigned long long)mumberPosClasses;

- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (void)initializeBuffers;
- (id)processVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 inputIsBGR:(bool)arg2;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;

@end
