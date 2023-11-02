
@interface HMISignificantActivityFcosDetector : HMFObject <HMFLogging> {
    struct CGSize { 
        double width; 
        double height; 
    }  _anchorStrides;
    float  _confidenceThresholds;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputDimensions;
    NSString * _inputFeatureValueName;
    HMINMSConfiguration * _nmsConfiguration;
    NSArray * _offsetsOneFeatureValueNames;
    NSArray * _offsetsZeroFeatureValueNames;
    NSArray * _rollsFeatureValueNames;
    NSArray * _scoresFeatureValueNames;
    NSArray * _yawsFeatureValueNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGSize { double x1; double x2; } inputDimensions;
@property (readonly) NSString *inputFeatureValueName;
@property (readonly) HMINMSConfiguration *nmsConfiguration;
@property (readonly) NSArray *offsetsOneFeatureValueNames;
@property (readonly) NSArray *offsetsZeroFeatureValueNames;
@property (readonly) NSArray *rollsFeatureValueNames;
@property (readonly) NSArray *scoresFeatureValueNames;
@property (readonly) Class superclass;
@property (readonly) NSArray *yawsFeatureValueNames;

+ (id)defaultAssetPath;
+ (id)defaultNMSConfiguration;
+ (id)logCategory;
+ (id)sharedModel;

- (void).cxx_destruct;
- (void)_postProcessOffsetsZero:(id)arg1 offsetsOne:(id)arg2 scores:(id)arg3 yaws:(id)arg4 rolls:(id)arg5 outputPredictions:(id)arg6;
- (bool)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer { }*)arg1 offsetsZero:(id)arg2 offsetsOne:(id)arg3 scores:(id)arg4 yaws:(id)arg5 rolls:(id)arg6 error:(id*)arg7;
- (id)initWithConfidenceThresholds:(id)arg1 nmsConfiguration:(id)arg2 error:(id*)arg3;
- (struct CGSize { double x1; double x2; })inputDimensions;
- (id)inputFeatureValueName;
- (id)nmsConfiguration;
- (id)offsetsOneFeatureValueNames;
- (id)offsetsZeroFeatureValueNames;
- (bool)predict:(struct __CVBuffer { }*)arg1 detectedObjects:(id)arg2 error:(id*)arg3;
- (id)rollsFeatureValueNames;
- (id)scoresFeatureValueNames;
- (id)yawsFeatureValueNames;

@end
