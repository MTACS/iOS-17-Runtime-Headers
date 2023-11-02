
@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _locale;
    bool  _nameTagging;
    NSString * _personalNameMapping;
    NSString * _punctuationMapping;
    _PASLazyPurgeableResult * _tagger;
    bool  _trustCoreNLP;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_purgeableNLTaggerWithNameTagging:(bool)arg1;
+ (id)_purgeableNSLinguisticTaggerWithTagSchemes:(id)arg1;
+ (id)forLocale:(id)arg1;
+ (id)forLocale:(id)arg1 tagNames:(bool)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
+ (id)forLocale:(id)arg1 tagNames:(bool)arg2 trustCoreNLP:(bool)arg3 personalNameMapping:(id)arg4 punctuationMapping:(id)arg5;
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;

- (void).cxx_destruct;
- (void*)_createOrReuseNLPTagger;
- (unsigned long long)hash;
- (id)initForLocale:(id)arg1 tagNames:(bool)arg2 trustCoreNLP:(bool)arg3 personalNameMapping:(id)arg4 punctuationMapping:(id)arg5;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTokenizerMappingTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (void)transformWithCoreNLP:(id)arg1 block:(id /* block */)arg2;
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(id /* block */)arg2;

@end
