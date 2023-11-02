
@interface NLTagger : NSObject {
    NSMutableDictionary * _classifierCaches;
    NSMutableDictionary * _customGazetteerDictionaries;
    NSMutableDictionary * _customGazetteers;
    NSMutableDictionary * _customModelDictionaries;
    NSMutableDictionary * _customModels;
    NSArray * _schemes;
    NSMutableDictionary * _sequenceCaches;
    NSString * _string;
    void * _tagger;
}

@property (nonatomic, readonly, copy) NSString *dominantLanguage;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, readonly, copy) NSArray *tagSchemes;

+ (id)availableTagSchemesForLanguage:(id)arg1;
+ (id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2;
+ (id)dominantScriptForString:(id)arg1;
+ (void)registerForAssetNotifications;
+ (void)requestAssetsForLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_customGazetteerAtIndex:(unsigned long long)arg1 unit:(long long)arg2 gazetteerDictionary:(id)arg3;
- (id)_customHypothesesAtIndex:(unsigned long long)arg1 fromHypothesisDictionary:(id)arg2;
- (id)_customHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 options:(unsigned long long)arg5 modelDictionary:(id)arg6 gazetteerDictionary:(id)arg7;
- (id)_customHypothesisDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4 maximumCount:(unsigned long long)arg5;
- (id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3;
- (id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2;
- (id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 modelDictionary:(id)arg5 gazetteerDictionary:(id)arg6;
- (id)_customTagDictionaryForSentence:(id)arg1 options:(unsigned long long)arg2 model:(id)arg3 gazetteer:(id)arg4;
- (id)_tagSchemeForScheme:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dominantLanguage;
- (id)dominantScript;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(id /* block */)arg5;
- (id)gazetteersForTagScheme:(id)arg1;
- (id)initWithTagSchemes:(id)arg1;
- (id)modelsForTagScheme:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sentenceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setGazetteers:(id)arg1 forTagScheme:(id)arg2;
- (void)setLanguage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setModels:(id)arg1 forTagScheme:(id)arg2;
- (void)setOrthography:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setString:(id)arg1;
- (id)string;
- (void)stringEditedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 changeInLength:(long long)arg2;
- (id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)tagHypothesesAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 maximumCount:(unsigned long long)arg4 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5;
- (id)tagSchemes;
- (id)tagsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unit:(long long)arg2;

@end
