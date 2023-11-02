
@interface CMINoiseModels : NSObject

+ (float)_fpnrScalingFactor:(id)arg1 darkCurrentNoiseCalibration:(id)arg2 fpnrEnabled:(bool)arg3;
+ (float)_fpnrSpatialStdDev:(id)arg1 darkCurrentNoiseCalibration:(id)arg2 fpnrEnabled:(bool)arg3;
+ (struct CMINoiseModel { int x1; float x2; float x3; float x4; float x5; })calculateBasicNoiseModel:(id)arg1;
+ (struct CMINoiseModel { int x1; float x2; float x3; float x4; float x5; })calculateNoiseModel:(id)arg1 darkCurrentNoiseTuningParams:(id)arg2;

@end
