
@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (const void*)cellStartsX;
+ (const void*)cellStartsY;
+ (const void*)importantClasses;
+ (struct CGSize { double x1; double x2; })inputImageSize;
+ (id)modelName;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)mumberPosClasses;
+ (unsigned long long)numberMaxoutLayers;
+ (bool)poseSquare;
+ (const void*)ratios;

- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;

@end
