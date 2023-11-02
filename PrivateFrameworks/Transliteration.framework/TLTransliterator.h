
@interface TLTransliterator : NSObject {
    struct unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> { 
        struct __compressed_pair<TLCompositeTransliterator *, std::default_delete<TLCompositeTransliterator>> { 
            struct TLCompositeTransliterator {} *__value_; 
        } __ptr_; 
    }  _compositeTransliterator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)flushDynamicLearningCache;
- (id)generateCandidatesForInputWord:(id)arg1 candidateContext:(id)arg2 maxCandidatesCount:(long long)arg3;
- (id)initWithLocale:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (void)learnCandidate:(id)arg1 candidateContext:(id)arg2;
- (void)resetDynamicLearningCache;
- (void)unlearnCandidate:(id)arg1 candidateContext:(id)arg2;

@end
