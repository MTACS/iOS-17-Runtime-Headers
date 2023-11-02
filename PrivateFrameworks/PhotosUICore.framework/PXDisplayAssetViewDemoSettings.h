
@interface PXDisplayAssetViewDemoSettings : PXSettings {
    bool  _allowsTextSelection;
    NSString * _audioIdentifiersToHighlightString;
    NSString * _humanActionIdentifiersToHighlightString;
    NSString * _personLocalIdentifiersToHighlightString;
    NSString * _sceneIdentifiersToHighlightString;
    bool  _showDummyTimeRangeHighlight;
    NSString * _stringToHighlight;
}

@property (nonatomic) bool allowsTextSelection;
@property (nonatomic, readonly) NSArray *audioIdentifiersToHighlight;
@property (nonatomic, copy) NSString *audioIdentifiersToHighlightString;
@property (nonatomic, readonly) NSArray *humanActionIdentifiersToHighlight;
@property (nonatomic, copy) NSString *humanActionIdentifiersToHighlightString;
@property (nonatomic, readonly) NSArray *personLocalIdentifiersToHighlight;
@property (nonatomic, copy) NSString *personLocalIdentifiersToHighlightString;
@property (nonatomic, readonly) NSArray *sceneIdentifiersToHighlight;
@property (nonatomic, copy) NSString *sceneIdentifiersToHighlightString;
@property (nonatomic) bool showDummyTimeRangeHighlight;
@property (nonatomic, copy) NSString *stringToHighlight;
@property (nonatomic, readonly) NSArray *stringsToHighlight;

+ (id)sharedInstance;
+ (id)transientProperties;

- (void).cxx_destruct;
- (bool)allowsTextSelection;
- (id)audioIdentifiersToHighlight;
- (id)audioIdentifiersToHighlightString;
- (id)humanActionIdentifiersToHighlight;
- (id)humanActionIdentifiersToHighlightString;
- (id)parentSettings;
- (id)personLocalIdentifiersToHighlight;
- (id)personLocalIdentifiersToHighlightString;
- (id)sceneIdentifiersToHighlight;
- (id)sceneIdentifiersToHighlightString;
- (void)setAllowsTextSelection:(bool)arg1;
- (void)setAudioIdentifiersToHighlightString:(id)arg1;
- (void)setDefaultValues;
- (void)setHumanActionIdentifiersToHighlightString:(id)arg1;
- (void)setPersonLocalIdentifiersToHighlightString:(id)arg1;
- (void)setSceneIdentifiersToHighlightString:(id)arg1;
- (void)setShowDummyTimeRangeHighlight:(bool)arg1;
- (void)setStringToHighlight:(id)arg1;
- (bool)showDummyTimeRangeHighlight;
- (id)stringToHighlight;
- (id)stringsToHighlight;

@end
