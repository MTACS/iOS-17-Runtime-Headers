
@interface PXDiagnosticsSettings : PXSettings {
    bool  _enableCompleteMyMomentService;
    bool  _enableContextualGesture;
    bool  _enableDebugDictionaryService;
    bool  _enableGenericService;
    bool  _enableGraphService;
    bool  _enableInternalSettingsService;
    bool  _enableScrollService;
    bool  _enableTitleFontService;
    long long  _scrollIterations;
    double  _scrollSpeed;
}

@property (nonatomic) bool enableCompleteMyMomentService;
@property (nonatomic) bool enableContextualGesture;
@property (nonatomic) bool enableDebugDictionaryService;
@property (nonatomic) bool enableGenericService;
@property (nonatomic) bool enableGraphService;
@property (nonatomic) bool enableInternalSettingsService;
@property (nonatomic) bool enableScrollService;
@property (nonatomic) bool enableTitleFontService;
@property (nonatomic) long long scrollIterations;
@property (nonatomic) double scrollSpeed;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)enableCompleteMyMomentService;
- (bool)enableContextualGesture;
- (bool)enableDebugDictionaryService;
- (bool)enableGenericService;
- (bool)enableGraphService;
- (bool)enableInternalSettingsService;
- (bool)enableScrollService;
- (bool)enableTitleFontService;
- (id)parentSettings;
- (long long)scrollIterations;
- (double)scrollSpeed;
- (void)setDefaultValues;
- (void)setEnableCompleteMyMomentService:(bool)arg1;
- (void)setEnableContextualGesture:(bool)arg1;
- (void)setEnableDebugDictionaryService:(bool)arg1;
- (void)setEnableGenericService:(bool)arg1;
- (void)setEnableGraphService:(bool)arg1;
- (void)setEnableInternalSettingsService:(bool)arg1;
- (void)setEnableScrollService:(bool)arg1;
- (void)setEnableTitleFontService:(bool)arg1;
- (void)setScrollIterations:(long long)arg1;
- (void)setScrollSpeed:(double)arg1;

@end
