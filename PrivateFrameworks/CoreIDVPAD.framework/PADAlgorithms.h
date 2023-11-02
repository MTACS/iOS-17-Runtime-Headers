
@interface PADAlgorithms : NSObject {
    struct shared_ptr<vision::mod::LivenessCheck_Options> { 
        struct LivenessCheck_Options {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _config;
    struct shared_ptr<vision::mod::LivenessCheckPredictor> { 
        struct LivenessCheckPredictor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _predictor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_retrieveFaceprintsFromPredictorUsingFACInput:(id)arg1;
- (id)_retrieveReferenceFramesFromPredictor;
- (id)getFACVersion;
- (double)getPRDFakeFrameThreshold;
- (double)getPRDLiveFrameThreshold;
- (id)initWithPADModelConfiguration:(id)arg1;
- (id)performFAC:(id)arg1 gesture:(long long)arg2 error:(id*)arg3;
- (double)performIDMatching:(id)arg1 toFaceprints:(id)arg2 error:(id*)arg3;
- (long long)performSC:(id)arg1 assessmentTA:(id)arg2 assessmentFakePRD:(id)arg3 assessmentLivePRD:(id)arg4 assessmentID:(id)arg5 error:(id*)arg6;
- (void)performTA:(struct __CVBuffer { }*)arg1 nccSignal:(double*)arg2 stitchDetected:(bool*)arg3 isSensitive:(bool)arg4 error:(id*)arg5;
- (id)processFacePoseInput:(id)arg1 gesture:(long long)arg2 error:(id*)arg3;
- (unsigned long long)requiredObservationSetSizeFAC:(long long)arg1;

@end
