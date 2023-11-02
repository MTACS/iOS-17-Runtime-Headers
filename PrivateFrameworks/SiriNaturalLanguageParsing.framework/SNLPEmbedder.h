
@interface SNLPEmbedder : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { 
        struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { 
            struct EmbedderOrchestrator {} *__value_; 
        } __ptr_; 
    }  _cppOrchestrator;
}

+ (id)convertCppSubwordTokenChainToObjC:(struct SubwordTokenChain { int (**x1)(); struct unique_ptr<std::string, std::default_delete<std::string>> { struct __compressed_pair<std::string *, std::default_delete<std::string>> { void *x_1_2_1; } x_2_1_1; } x2; struct PtrVector<sirinluinternal::SubwordToken> { struct vector<std::unique_ptr<sirinluinternal::SubwordToken>, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<std::unique_ptr<sirinluinternal::SubwordToken> *, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> { void *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getEmbeddings:(id)arg1;
- (id)getEmbeddingsBySentence:(id)arg1;
- (id)getEmbeddingsBySentenceWithError:(id)arg1 error:(id*)arg2;
- (id)getEmbeddingsWithError:(id)arg1 error:(id*)arg2;
- (id)initFromAssetDirectoryURL:(id)arg1;
- (id)initFromAssetDirectoryURLWithError:(id)arg1 error:(id*)arg2;
- (id)initFromSourceVocabPath:(id)arg1 bertModelPath:(id)arg2 bertConfigPath:(id)arg3 reformulatorPath:(id)arg4;
- (id)initFromSourceVocabPathWithError:(id)arg1 bertModelPath:(id)arg2 bertConfigPath:(id)arg3 reformulatorPath:(id)arg4 error:(id*)arg5;
- (void)warmup;

@end
