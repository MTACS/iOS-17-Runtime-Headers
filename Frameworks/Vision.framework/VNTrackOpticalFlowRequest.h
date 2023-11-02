
@interface VNTrackOpticalFlowRequest : VNStatefulRequest {
    VNImageBuffer * _previousImageBuffer;
    VNImageSignature * _previousImageSignature;
    VNOpticalFlowObservation * _previousObservation;
    bool  _previousPortraitMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousRegionOfInterest;
    unsigned long long  _previousRequestRevision;
}

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) bool keepNetworkOutput;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (id)_createGeneratorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 images:(id)arg3 portraitMode:(bool)arg4 previousTargetImageIsCurrentRefImage:(bool)arg5 previousObservation:(id)arg6;
- (id)_observationForOpticalFlowOfReferenceImageBuffer:(id)arg1 targetImageBuffer:(id)arg2 portraitMode:(bool)arg3 previousObservation:(id)arg4 previousTargetImageIsCurrentRefImage:(bool)arg5 requestRevision:(unsigned long long)arg6 requestPerformingContext:(id)arg7 error:(id*)arg8;
- (bool)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (unsigned long long)computationAccuracy;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)keepNetworkOutput;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (unsigned int)outputPixelFormat;
- (void)setComputationAccuracy:(unsigned long long)arg1;
- (void)setKeepNetworkOutput:(bool)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
