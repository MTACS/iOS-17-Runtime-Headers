
@interface PSGWordBoundaryFSTGrammar : NSObject {
    NSCache * _lmWrapperCache;
    NSObject<OS_dispatch_queue> * _lmWrapperQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void*)_createLanguageModel:(id)arg1;
- (void*)_createLexicon:(id)arg1;
- (id)_getLMWrapper:(id)arg1;
- (id)_getPrimingToken:(void*)arg1 transientTokenID:(unsigned int)arg2;
- (void)clearLMCache;
- (id)getOTAPathForProactiveBundle:(id)arg1;
- (id)init;
- (id)triggerAttributesForContext:(id)arg1 localeIdentifier:(id)arg2;
- (void)warmUpForLocaleIdentifier:(id)arg1;
- (void)warmUpForLocaleIdentifier:(id)arg1 waitForCompletion:(bool)arg2;

@end
