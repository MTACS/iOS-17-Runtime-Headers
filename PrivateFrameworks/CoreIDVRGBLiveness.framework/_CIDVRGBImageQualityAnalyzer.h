
@interface _CIDVRGBImageQualityAnalyzer : PADVNSerialRequestsScheduler <CIDVRGBImageQualityAnalyzer> {
    id /* block */  _completion;
    long long  _imageType;
    NSNumber * _lastIssue;
    unsigned long long  _lastIssueCount;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_errorFromResult:(long long)arg1;
- (void)_registerResult:(id)arg1;
- (void)_setupForAnalysisWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)_verifyBlurriness:(id)arg1;
- (id)_verifyExposure:(id)arg1;
- (id)_verifyFaceAttributes:(id)arg1;
- (id)_verifyFacePose:(id)arg1;
- (id)_verifyFacePosition:(id)arg1;
- (void)analyzeObservationComposite:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (long long)performLightweightCheckWithFaces:(id)arg1;
- (void)processFrame:(id)arg1;
- (id)requestsForFrame:(id)arg1 handler:(id /* block */)arg2;
- (void)verifyLightweightQualityForFrame:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyQualityForFrame:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
