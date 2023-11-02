
@interface HMIFaceClassifierVIP : HMFObject <HMFLogging, HMIFaceClassifier> {
    double  _classificationThresholdKnown;
    double  _classificationThresholdUnknown;
    HMIFaceQualityFilterSVM * _faceAestheticQualityFilter;
    HMIFaceQualityFilterSVM * _faceRecognizabilityFilter;
    HMIFaceprinter * _faceprinter;
}

@property (readonly) double classificationThresholdKnown;
@property (readonly) double classificationThresholdUnknown;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceQualityFilterSVM *faceAestheticQualityFilter;
@property (readonly) HMIFaceQualityFilterSVM *faceRecognizabilityFilter;
@property (readonly) HMIFaceprinter *faceprinter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (double)classificationThresholdKnown;
- (double)classificationThresholdUnknown;
- (id)classifyFaceEvent:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 fastMode:(bool)arg3 homeUUID:(id)arg4 error:(id*)arg5;
- (id)faceAestheticQualityFilter;
- (id)faceRecognizabilityFilter;
- (id)faceprinter;
- (id)initWithError:(id*)arg1;
- (id)qualityPredictionFromSVMUsingFaceQualityFilterSVM:(id)arg1 detectorConfidence:(double)arg2 laplacian:(double)arg3 yaw:(double)arg4 boxSize:(double)arg5 error:(id*)arg6;

@end
