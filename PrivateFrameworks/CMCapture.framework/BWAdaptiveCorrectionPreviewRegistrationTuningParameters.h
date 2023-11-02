
@interface BWAdaptiveCorrectionPreviewRegistrationTuningParameters : NSObject {
    struct AdaptiveCorrectionConfig { 
        double epErrorLimitWidePix_FirstPass; 
        double epErrorLimitWidePix_SecondPass; 
        double rangePFL_T; 
        double rangePFL_W; 
        double rangeOCxT; 
        double rangeOCxW; 
        double rangeOCyT; 
        double rangeOCyW; 
        double intermediateMacroDistMM; 
        double extremeMacroDistMM; 
        int minPointsForAdjustment; 
        double errorVal_GreaterThanInf; 
        double errorVal_LessThanExtremeMacro; 
        double errorVal_BetweenIntermediate_ExtremeMacro; 
        bool runAnalyticalPreconditioning; 
        double spgEpsilon; 
        float keypointOutliersPercentile; 
        float epErrorLimitTelePix_ParallelCorrection; 
        float temporalFilteringStrength; 
        float temporalFilteringStrengthParallel; 
        float temporalInitializationFactor; 
        float scaleTuningWithDigitalZoomByFactor; 
        struct ADCPassConfig { 
            bool isValid; 
            bool isPassEnabled; 
            double epErrorLimitWidePix; 
            double rangePFL_T; 
            double rangePFL_W; 
            double rangeOCxT; 
            double rangeOCxW; 
            double rangeOCyT; 
            double rangeOCyW; 
            double rangePFL_T_dist; 
            double rangePFL_W_dist; 
            double rangeOCxT_dist; 
            double rangeOCxW_dist; 
            int minPointsForAdjustment; 
            double spgEpsilon; 
            int spgMaxIterations; 
            int spgMaxAlphaIterations; 
        } overrideConfigPass1; 
        struct ADCPassConfig { 
            bool isValid; 
            bool isPassEnabled; 
            double epErrorLimitWidePix; 
            double rangePFL_T; 
            double rangePFL_W; 
            double rangeOCxT; 
            double rangeOCxW; 
            double rangeOCyT; 
            double rangeOCyW; 
            double rangePFL_T_dist; 
            double rangePFL_W_dist; 
            double rangeOCxT_dist; 
            double rangeOCxW_dist; 
            int minPointsForAdjustment; 
            double spgEpsilon; 
            int spgMaxIterations; 
            int spgMaxAlphaIterations; 
        } overrideConfigPass2; 
        struct ADCPassConfig { 
            bool isValid; 
            bool isPassEnabled; 
            double epErrorLimitWidePix; 
            double rangePFL_T; 
            double rangePFL_W; 
            double rangeOCxT; 
            double rangeOCxW; 
            double rangeOCyT; 
            double rangeOCyW; 
            double rangePFL_T_dist; 
            double rangePFL_W_dist; 
            double rangeOCxT_dist; 
            double rangeOCxW_dist; 
            int minPointsForAdjustment; 
            double spgEpsilon; 
            int spgMaxIterations; 
            int spgMaxAlphaIterations; 
        } overrideConfigPassDist; 
    }  _adaptiveCorrectionConfigs;
    const struct AdaptiveCorrectionConfig { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; double x13; double x14; bool x15; double x16; float x17; float x18; float x19; float x20; float x21; float x22; struct ADCPassConfig { bool x_23_1_1; bool x_23_1_2; double x_23_1_3; double x_23_1_4; double x_23_1_5; double x_23_1_6; double x_23_1_7; double x_23_1_8; double x_23_1_9; double x_23_1_10; double x_23_1_11; double x_23_1_12; double x_23_1_13; int x_23_1_14; double x_23_1_15; int x_23_1_16; int x_23_1_17; } x23; struct ADCPassConfig { bool x_24_1_1; bool x_24_1_2; double x_24_1_3; double x_24_1_4; double x_24_1_5; double x_24_1_6; double x_24_1_7; double x_24_1_8; double x_24_1_9; double x_24_1_10; double x_24_1_11; double x_24_1_12; double x_24_1_13; int x_24_1_14; double x_24_1_15; int x_24_1_16; int x_24_1_17; } x24; struct ADCPassConfig { bool x_25_1_1; bool x_25_1_2; double x_25_1_3; double x_25_1_4; double x_25_1_5; double x_25_1_6; double x_25_1_7; double x_25_1_8; double x_25_1_9; double x_25_1_10; double x_25_1_11; double x_25_1_12; double x_25_1_13; int x_25_1_14; double x_25_1_15; int x_25_1_16; int x_25_1_17; } x25; } * _adaptiveCorrectionConfigsPtr;
    unsigned int  _configuredNumKeypoints;
    double  _epipolarWeightFalloffDistance;
    float  _keypointsMinSelectionScore;
    double  _macroDepthWeightFalloffDistance;
    struct BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig { 
        unsigned int numPyrLevels; 
        unsigned int imageWidth; 
        unsigned int imageHeight; 
        unsigned int keypointGridWidth; 
        unsigned int keypointGridHeight; 
        unsigned int keypointsTemplateRadius; 
        unsigned int keypointsSearchRadius; 
        float keypointsMinNccScore; 
    }  _regToolBoxConfig;
}

@property (nonatomic, readonly) const struct AdaptiveCorrectionConfig { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; double x13; double x14; bool x15; double x16; float x17; float x18; float x19; float x20; float x21; float x22; struct ADCPassConfig { bool x_23_1_1; bool x_23_1_2; double x_23_1_3; double x_23_1_4; double x_23_1_5; double x_23_1_6; double x_23_1_7; double x_23_1_8; double x_23_1_9; double x_23_1_10; double x_23_1_11; double x_23_1_12; double x_23_1_13; int x_23_1_14; double x_23_1_15; int x_23_1_16; int x_23_1_17; } x23; struct ADCPassConfig { bool x_24_1_1; bool x_24_1_2; double x_24_1_3; double x_24_1_4; double x_24_1_5; double x_24_1_6; double x_24_1_7; double x_24_1_8; double x_24_1_9; double x_24_1_10; double x_24_1_11; double x_24_1_12; double x_24_1_13; int x_24_1_14; double x_24_1_15; int x_24_1_16; int x_24_1_17; } x24; struct ADCPassConfig { bool x_25_1_1; bool x_25_1_2; double x_25_1_3; double x_25_1_4; double x_25_1_5; double x_25_1_6; double x_25_1_7; double x_25_1_8; double x_25_1_9; double x_25_1_10; double x_25_1_11; double x_25_1_12; double x_25_1_13; int x_25_1_14; double x_25_1_15; int x_25_1_16; int x_25_1_17; } x25; }*adaptiveCorrectionConfigsPtr;
@property (nonatomic, readonly) unsigned int configuredNumKeypoints;
@property (nonatomic, readonly) double epipolarWeightFalloffDistance;
@property (nonatomic, readonly) float keypointsMinSelectionScore;
@property (nonatomic, readonly) double macroDepthWeightFalloffDistance;
@property (nonatomic, readonly) struct BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; } regToolBoxConfig;

+ (void)initialize;

- (const struct AdaptiveCorrectionConfig { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; double x13; double x14; bool x15; double x16; float x17; float x18; float x19; float x20; float x21; float x22; struct ADCPassConfig { bool x_23_1_1; bool x_23_1_2; double x_23_1_3; double x_23_1_4; double x_23_1_5; double x_23_1_6; double x_23_1_7; double x_23_1_8; double x_23_1_9; double x_23_1_10; double x_23_1_11; double x_23_1_12; double x_23_1_13; int x_23_1_14; double x_23_1_15; int x_23_1_16; int x_23_1_17; } x23; struct ADCPassConfig { bool x_24_1_1; bool x_24_1_2; double x_24_1_3; double x_24_1_4; double x_24_1_5; double x_24_1_6; double x_24_1_7; double x_24_1_8; double x_24_1_9; double x_24_1_10; double x_24_1_11; double x_24_1_12; double x_24_1_13; int x_24_1_14; double x_24_1_15; int x_24_1_16; int x_24_1_17; } x24; struct ADCPassConfig { bool x_25_1_1; bool x_25_1_2; double x_25_1_3; double x_25_1_4; double x_25_1_5; double x_25_1_6; double x_25_1_7; double x_25_1_8; double x_25_1_9; double x_25_1_10; double x_25_1_11; double x_25_1_12; double x_25_1_13; int x_25_1_14; double x_25_1_15; int x_25_1_16; int x_25_1_17; } x25; }*)adaptiveCorrectionConfigsPtr;
- (unsigned int)configuredNumKeypoints;
- (double)epipolarWeightFalloffDistance;
- (id)init;
- (id)initWithTuningDictionary:(id)arg1;
- (float)keypointsMinSelectionScore;
- (double)macroDepthWeightFalloffDistance;
- (struct BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; })regToolBoxConfig;

@end
