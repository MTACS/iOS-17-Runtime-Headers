
@interface PUPhotoEditAggregateSession : NSObject {
    bool  __autoCropAdjusted;
    bool  __autoCropReset;
    bool  __hasCropSuggestion;
    bool  __hasPerspectiveCropSuggestion;
    double  _originalDuration;
    NSString * _pluginIdentifier;
    bool  _pluginSaved;
    bool  _pluginStarted;
    bool  _shouldUseVideoKeys;
    bool  _toggledOriginal;
}

@property (setter=_setAutoCropAdjusted:, nonatomic) bool _autoCropAdjusted;
@property (nonatomic, readonly) NSArray *_autoCropKeys;
@property (setter=_setAutoCropReset:, nonatomic) bool _autoCropReset;
@property (setter=_setHasCropSuggestion:, nonatomic) bool _hasCropSuggestion;
@property (setter=_setHasPerspectiveCropSuggestion:, nonatomic) bool _hasPerspectiveCropSuggestion;
@property (nonatomic) double originalDuration;
@property (nonatomic, retain) NSString *pluginIdentifier;
@property (nonatomic) bool pluginSaved;
@property (nonatomic) bool pluginStarted;
@property (nonatomic) bool shouldUseVideoKeys;
@property (nonatomic) bool toggledOriginal;

- (void).cxx_destruct;
- (bool)_autoCropAdjusted;
- (id)_autoCropKeys;
- (bool)_autoCropReset;
- (bool)_hasCropSuggestion;
- (bool)_hasPerspectiveCropSuggestion;
- (struct __CFString { }*)_keyForSessionEnd:(long long)arg1;
- (void)_recordKeys:(id)arg1;
- (id)_sessionKeysWithEnd:(long long)arg1;
- (void)_setAutoCropAdjusted:(bool)arg1;
- (void)_setAutoCropReset:(bool)arg1;
- (void)_setHasCropSuggestion:(bool)arg1;
- (void)_setHasPerspectiveCropSuggestion:(bool)arg1;
- (void)finishSessionWithEnd:(long long)arg1;
- (id)finishSessionWithEnd:(long long)arg1 newCompositionController:(id)arg2 oldCompositionController:(id)arg3;
- (void)notifyDidAdjustCrop;
- (void)notifyDidApplyAutoCrop;
- (void)notifyDidApplyPerspectiveAutoCrop;
- (void)notifyDidResetCrop;
- (double)originalDuration;
- (id)pluginIdentifier;
- (bool)pluginSaved;
- (bool)pluginStarted;
- (void)setOriginalDuration:(double)arg1;
- (void)setPluginIdentifier:(id)arg1;
- (void)setPluginSaved:(bool)arg1;
- (void)setPluginStarted:(bool)arg1;
- (void)setShouldUseVideoKeys:(bool)arg1;
- (void)setToggledOriginal:(bool)arg1;
- (bool)shouldUseVideoKeys;
- (bool)toggledOriginal;

@end
