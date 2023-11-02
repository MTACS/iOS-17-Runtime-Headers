
@interface CSAttSiriMitigationAssetProvider : NSObject {
    bool  _overrideEnabled;
    NSString * _overridePath;
    CSUAFAssetManager * _uafAssetManager;
}

@property (nonatomic) bool overrideEnabled;
@property (nonatomic, retain) NSString *overridePath;
@property (nonatomic, retain) CSUAFAssetManager *uafAssetManager;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)_getAssetToUseWithCompletion:(id /* block */)arg1;
- (void)getAllowPhrasesListOverrideFileWithCompletion:(id /* block */)arg1;
- (void)getNeuralCombinerConfigFileWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithUAFAssetManager:(id)arg1 withAssetOverrideFlag:(bool)arg2 withOverrideAssetPath:(id)arg3;
- (bool)overrideEnabled;
- (id)overridePath;
- (void)setOverrideEnabled:(bool)arg1;
- (void)setOverridePath:(id)arg1;
- (void)setUafAssetManager:(id)arg1;
- (id)uafAssetManager;

@end
