
@interface SNLPITFMClassifier : NSObject {
    struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { 
        struct __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { 
            struct SNLPAssetLogger {} *__value_; 
        } __ptr_; 
    }  _assetLogger;
    SNLPITFMModelBundle * _modelBundle;
    SNLPITFMModelInfo * _modelInfo;
    struct unique_ptr<itfm_inference_orchestrator::orchestration::ITFMOrchestrator, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> { 
        struct __compressed_pair<itfm_inference_orchestrator::orchestration::ITFMOrchestrator *, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> { 
            struct ITFMOrchestrator {} *__value_; 
        } __ptr_; 
    }  _orchestrator;
}

@property (nonatomic, readonly) SNLPITFMModelBundle *modelBundle;
@property (nonatomic, readonly) SNLPITFMModelInfo *modelInfo;

+ (struct unique_ptr<const sirinluinternalitfm::ITFMParserRequest, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> { struct __compressed_pair<const sirinluinternalitfm::ITFMParserRequest *, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> { struct ITFMParserRequest {} *x_1_1_1; } x1; })_convertRequest:(id)arg1;
+ (id)_convertResponse:(struct ITFMParserResponse { int (**x1)(); struct PtrVector<sirinluinternalitfm::ITFMHypothesis> { struct vector<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis> *, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> { void *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct unique_ptr<sirinluexternal::Parser, std::default_delete<sirinluexternal::Parser>> { struct __compressed_pair<sirinluexternal::Parser *, std::default_delete<sirinluexternal::Parser>> { struct Parser {} *x_1_2_1; } x_3_1_1; } x3; float x4; bool x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; } x6; })arg1;
+ (id /* block */)_initializationBlock;
+ (id)classifierWithModelBundle:(id)arg1 modelInfo:(id)arg2 error:(id*)arg3;
+ (id)classifierWithModelBundle:(id)arg1 modelInfo:(id)arg2 initializationBlock:(id /* block */)arg3 error:(id*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> { struct SNLPAssetLogger {} *x_1_1_1; } x1; })_setupAssetLogger;
- (id)initWithModelBundle:(id)arg1 modelInfo:(id)arg2 initializationBlock:(id /* block */)arg3 error:(id*)arg4;
- (id)modelBundle;
- (id)modelInfo;
- (id)responseForRequest:(id)arg1 error:(id*)arg2;

@end
