
@interface VNCoreMLRequest : VNImageBasedRequest {
    VNCoreMLModel * _model;
}

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic, readonly) VNCoreMLModel *model;

+ (Class)configurationClass;
+ (bool)supportedRevisionsAreFilteredBasedOnAvailableComputeDevices;

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)description;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)model;
- (id)newDuplicateInstance;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
