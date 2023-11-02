
@interface SNLPNaturalLanguageParser : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { 
        struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { 
            struct NLv4InferenceOrchestrator {} *__value_; 
        } __ptr_; 
    }  _cppOrchestrator;
}

+ (id)parserFromAssetDirectory:(id)arg1 error:(id*)arg2;
+ (id)parserFromAssetDirectory:(id)arg1 metadata:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithCppOrchestrator:(struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> { struct NLv4InferenceOrchestrator {} *x_1_1_1; } x1; })arg1;
- (id)inferenceResponseForRequest:(id)arg1 error:(id*)arg2;

@end
