
@interface UIKBRenderConfig : NSObject <NSCopying> {
    NSString * _activatedKeyplaneSwitchControlKeyBackgroundName;
    double  _blurRadius;
    double  _blurSaturation;
    _UIButtonBarButtonVisualProvider * _buttonBarVisualProvider;
    NSString * _controlKeyBackgroundName;
    long long  _forceQuality;
    bool  _isFloating;
    double  _keycapOpacity;
    bool  _lightKeyboard;
    double  _lightKeycapOpacity;
    bool  _useEmojiStyles;
}

@property (nonatomic, copy) NSString *activatedKeyplaneSwitchControlKeyBackgroundName;
@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, readonly) long long blurEffectStyle;
@property (nonatomic) double blurRadius;
@property (nonatomic) double blurSaturation;
@property (nonatomic, readonly) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider;
@property (nonatomic, copy) NSString *controlKeyBackgroundName;
@property (nonatomic) long long forceQuality;
@property (nonatomic) bool isFloating;
@property (nonatomic) double keycapOpacity;
@property (nonatomic) bool lightKeyboard;
@property (nonatomic) double lightKeycapOpacity;
@property (nonatomic, readonly) bool whiteText;

+ (long long)backdropStyleForStyle:(long long)arg1 quality:(long long)arg2;
+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2 traitEnvironment:(id)arg3;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (id)defaultEmojiConfig;
+ (id)lowQualityDarkConfig;
+ (Class)preferredVisualProviderClass;

- (void).cxx_destruct;
- (id)activatedKeyplaneSwitchControlKeyBackgroundName;
- (long long)backdropStyle;
- (long long)blurEffectStyle;
- (double)blurRadius;
- (double)blurSaturation;
- (id)buttonBarVisualProvider;
- (id)controlKeyBackgroundName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)forceQuality;
- (bool)isEqual:(id)arg1;
- (bool)isFloating;
- (double)keycapOpacity;
- (bool)lightKeyboard;
- (double)lightKeycapOpacity;
- (void)setActivatedKeyplaneSwitchControlKeyBackgroundName:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBlurSaturation:(double)arg1;
- (void)setControlKeyBackgroundName:(id)arg1;
- (void)setForceQuality:(long long)arg1;
- (void)setIsFloating:(bool)arg1;
- (void)setKeycapOpacity:(double)arg1;
- (void)setLightKeyboard:(bool)arg1;
- (void)setLightKeycapOpacity:(double)arg1;
- (bool)whiteText;

@end
