
@interface ADAdaptiveCorrectionPipeline : NSObject {
    struct AdaptiveCorrection { } * _adc;
    struct AdaptiveCorrectionConfig { 
        double epErrorLimitWidePix_FirstPass; 
        double epErrorLimitWidePix_SecondPass; 
        double rangePFL_T; 
        double rangePFL_W; 
        double rangeOCxT; 
        double rangeOCxW; 
        double rangeOCyW; 
        double intermediateMacroDistMM; 
        double extremeMacroDistMM; 
        int minPointsForAdjustment; 
        double errorVal_GreaterThanInf; 
        double errorVal_LessThanExtremeMacro; 
        double errorVal_BetweenIntermediate_ExtremeMacro; 
        bool runAnalyticalPreconditioning; 
        double spgEpsilon; 
        float temporalFilteringStrength; 
    }  _config;
    int  _maxNumPoints;
    ADAdaptiveCorrectionPipelineParameters * _pipelineParameters;
}

@property (readonly) int maxNumPoints;

+ (long long)approximateCorrectionWithPointsTele:(const double*)arg1 xyPointsWide:(const double*)arg2 numPoints:(int)arg3 calModel:(id)arg4;
+ (long long)computeVerticalBaselineTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 extrinsicRefToAuxPrime:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 rotationRefToRefPrime:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; }*)arg3 rotationAuxToAuxPrime:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; }*)arg4;
+ (void)convertCameraCalibrationTele:(id)arg1 cameraCalibrationWide:(id)arg2 toDistortionModelTele:(struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg3 toDistortionModelWide:(struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg4 toCalModel:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg5;
+ (void)convertExtrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 toInternalFormat:(double)arg2;
+ (void)convertInternalExtrinsics:(double)arg1 toMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2;
+ (struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; })convertToInternalCalModel:(id)arg1;
+ (void)fillDistortionModel:(struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg1 andUpdateCalModel:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg2 forCamera:(int)arg3 fromCalib:(id)arg4;
+ (double)meanFundamentalEpipolarErrorForCalModel:(const struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg1 xyPointsTele:(const double*)arg2 xyPointsWide:(const double*)arg3 numPoints:(int)arg4;
+ (long long)rotateCalModel:(const struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg1 extrinsicRefToAuxRotated:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 rotationRef:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg3 rotationAux:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg4 calRotated:(struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg5;
+ (long long)rotateDistortionModel:(const struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg1 rotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg2 distRotated:(struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg3;
+ (long long)transformPointsWithMatrix:(const double*)arg1 numPoints:(int)arg2 transformMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg3 xyPointsTransformed:(double*)arg4;
+ (void)updateADCalModel:(id)arg1 fromInternalCalModel:(const struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg2;
+ (void)updateADCameraCalib:(id)arg1 fromDistortionModel:(const struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg2 andCalModel:(const struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg3 forCamera:(int)arg4;
+ (void)updateCameraCalibrationTele:(id)arg1 cameraCalibrationWide:(id)arg2 withDistortionModelTele:(const struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg3 withDistortionModelWide:(const struct DistortionModel { double x1; double x2; double x3; double x4; double x5[8]; double x6[8]; }*)arg4 withCalModel:(const struct CalModel { double x1[2]; double x2[2]; double x3[2]; double x4[12]; }*)arg5;

- (void).cxx_destruct;
- (long long)fullCorrectionWithCameraCalibrationTele:(id)arg1 cameraCalibrationWide:(id)arg2 xyPointsTele:(const double*)arg3 xyPointsWide:(const double*)arg4 numPoints:(int)arg5;
- (long long)fullCorrectionWithPointsTele:(const double*)arg1 xyPointsWide:(const double*)arg2 numPoints:(int)arg3 calModel:(id)arg4;
- (long long)fullTemporalCorrectionWithCameraCalibrationTele:(id)arg1 cameraCalibrationWide:(id)arg2 xyPointsTele:(const double*)arg3 xyPointsWide:(const double*)arg4 numPoints:(int)arg5;
- (struct AdaptiveCorrectionConfig { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; double x12; double x13; bool x14; double x15; float x16; })getConfigFromPipelineParams;
- (struct AdaptiveCorrectionStatus { int x1; bool x2; struct CalModel { double x_3_1_1[2]; double x_3_1_2[2]; double x_3_1_3[2]; double x_3_1_4[12]; } x3; int x4; bool x5; bool x6; struct CalModel { double x_7_1_1[2]; double x_7_1_2[2]; double x_7_1_3[2]; double x_7_1_4[12]; } x7; double x8; int x9; bool x10; double x11; struct CalModel { double x_12_1_1[2]; double x_12_1_2[2]; double x_12_1_3[2]; double x_12_1_4[12]; } x12; bool x13[2048]; int x14; bool x15; struct CalModel { double x_16_1_1[2]; double x_16_1_2[2]; double x_16_1_3[2]; double x_16_1_4[12]; } x16; double x17; int x18; bool x19; double x20; struct CalModel { double x_21_1_1[2]; double x_21_1_2[2]; double x_21_1_3[2]; double x_21_1_4[12]; } x21; bool x22[2048]; struct DistortionModel { double x_23_1_1; double x_23_1_2; double x_23_1_3; double x_23_1_4; double x_23_1_5[8]; double x_23_1_6[8]; } x23; struct DistortionModel { double x_24_1_1; double x_24_1_2; double x_24_1_3; double x_24_1_4; double x_24_1_5[8]; double x_24_1_6[8]; } x24; int x25; bool x26; double x27; int x28; bool x29; })getStatus;
- (id)initWithMaxNumPoints:(int)arg1;
- (id)initWithMaxNumPoints:(int)arg1 andParameters:(id)arg2;
- (int)maxNumPoints;

@end
