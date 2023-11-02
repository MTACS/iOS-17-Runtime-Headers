
@interface VTPhraseDetectorConfig : NSObject {
    NSString * _configPathNDAPI;
    NSString * _configPathRecognizer;
    NSArray * _phraseConfigs;
    NSString * _resourcePath;
    bool  _useKeywordSpotting;
    bool  _useRecognizerCombination;
}

@property (nonatomic, readonly) NSString *configPathNDAPI;
@property (nonatomic, readonly) NSString *configPathRecognizer;
@property (nonatomic, readonly) NSArray *phraseConfigs;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) bool useKeywordSpotting;
@property (nonatomic, readonly) bool useRecognizerCombination;

- (void).cxx_destruct;
- (id)configPathNDAPI;
- (id)configPathRecognizer;
- (id)initWithResourcePath:(id)arg1 configPathNDAPI:(id)arg2 useRecognizerCombination:(bool)arg3 configPathRecognizer:(id)arg4 useKeywordSpotting:(bool)arg5 phraseConfigs:(id)arg6;
- (id)phraseConfigs;
- (id)resourcePath;
- (bool)useKeywordSpotting;
- (bool)useRecognizerCombination;

@end
