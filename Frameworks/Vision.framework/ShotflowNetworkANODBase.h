
@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (const void*)cellStartsX;
+ (const void*)cellStartsY;
+ (struct CGSize { double x1; double x2; })inputImageSize;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;
+ (unsigned long long)numberMaxoutLayers;
+ (bool)poseSquare;
+ (const void*)ratios;

- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (void)initializeBuffers;

@end
