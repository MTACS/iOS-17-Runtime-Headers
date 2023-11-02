
@interface CDMSiriVocabularyProtoSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    NSArray * _overrideSpans;
    CKVocabularySandbox * _sandbox;
    CKVocabularySearcher * _searcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *overrideSpans;
@property (readonly) Class superclass;

+ (id)buildCKVTokenChain:(id)arg1;
+ (id)convertCDMTokenToCKVToken:(id)arg1;
+ (id)convertCKVMatchingSpanToNLUTypesMatchingSpan:(id)arg1 tokenChain:(id)arg2;
+ (id)convertCKVMatchingSpans:(id)arg1 tokenChain:(id)arg2;

- (void).cxx_destruct;
- (id)callSearcher:(id)arg1;
- (void)dealloc;
- (id)initWithOverrideSpans:(id)arg1;
- (id)initWithSandboxId:(id)arg1;
- (id)initWithSearcher:(id)arg1;
- (id)matchSpansForTokenChain:(id)arg1;
- (id)overrideSpans;
- (id)sandboxId;

@end
