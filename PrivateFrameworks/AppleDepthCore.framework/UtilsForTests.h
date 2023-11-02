
@interface UtilsForTests : NSObject

+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareBuffer:(struct __CVBuffer { }*)arg1 offset:(struct CGSize { double x1; double x2; })arg2 toRefBuffer:(struct __CVBuffer { }*)arg3 ignoreRefZeros:(bool)arg4;
+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareBuffer:(struct __CVBuffer { }*)arg1 offset:(struct CGSize { double x1; double x2; })arg2 toRefBuffer:(struct __CVBuffer { }*)arg3 ignoreResultZeros:(bool)arg4 ignoreRefZeros:(bool)arg5 outlierPercentile:(float)arg6;
+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareBuffer:(struct __CVBuffer { }*)arg1 toRefBuffer:(struct __CVBuffer { }*)arg2 ignoreRefZeros:(bool)arg3;
+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareBuffer:(struct __CVBuffer { }*)arg1 toRefBuffer:(struct __CVBuffer { }*)arg2 ignoreRefZeros:(bool)arg3 outlierPercentile:(float)arg4;
+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareBuffer:(struct __CVBuffer { }*)arg1 toRefBuffer:(struct __CVBuffer { }*)arg2 ignoreResultZeros:(bool)arg3 ignoreRefZeros:(bool)arg4;
+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareResults:(struct __CVBuffer { }*)arg1 toBaseLineInPath:(id)arg2 ignoreRefZeros:(bool)arg3;
+ (struct BaselineTestStats_s { float x1; float x2; float x3; float x4; })compareResults:(struct __CVBuffer { }*)arg1 toBaseLineInPath:(id)arg2 ignoreRefZeros:(bool)arg3 outlierPercentile:(float)arg4;
+ (id)createJasperCameraCalibration;
+ (id)createSuperWideCameraCalibration;
+ (id)createSyntheticCameraCalibrationNilDistortion;
+ (id)createSyntheticCameraCalibrationWithDistortion:(id)arg1;
+ (id)createSyntheticCameraCalibrationXThetaDistortion;
+ (id)createWideCameraCalibrationWithPolynomials;
+ (id)getJasperPointCloudFromPath:(id)arg1;
+ (id)getNewTempFilePathWithExtension:(id)arg1;
+ (id)getTempDirPath;
+ (id)pointsArrayFromFilePath:(id)arg1;
+ (struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })pointsVectorFromFilePath:(id)arg1;
+ (unsigned long long)preferredEspressoEngine;

@end
