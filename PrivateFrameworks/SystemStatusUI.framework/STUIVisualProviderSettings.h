
@interface STUIVisualProviderSettings : PTSettings {
    double  _backgroundActivityCoalescingDelay;
    bool  _enableActivity;
    bool  _fullWidthBackgroundActivity;
    bool  _hasBoldTime;
    bool  _legacyPhoneUsesiPadLayout;
    bool  _promoteThermalWarning;
    bool  _redInSpringBoard;
    bool  _showVPNDisconnect;
    bool  _showsDateBeforeTime;
    NSString * _visualProviderClassName;
}

@property (nonatomic) double backgroundActivityCoalescingDelay;
@property (nonatomic) bool enableActivity;
@property (nonatomic) bool fullWidthBackgroundActivity;
@property (nonatomic) bool hasBoldTime;
@property (nonatomic) bool legacyPhoneUsesiPadLayout;
@property (nonatomic) bool promoteThermalWarning;
@property (nonatomic) bool redInSpringBoard;
@property (nonatomic) bool showVPNDisconnect;
@property (nonatomic) bool showsDateBeforeTime;
@property (nonatomic, retain) NSString *visualProviderClassName;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)backgroundActivityCoalescingDelay;
- (bool)enableActivity;
- (bool)fullWidthBackgroundActivity;
- (bool)hasBoldTime;
- (bool)legacyPhoneUsesiPadLayout;
- (bool)promoteThermalWarning;
- (bool)redInSpringBoard;
- (void)setBackgroundActivityCoalescingDelay:(double)arg1;
- (void)setDefaultValues;
- (void)setEnableActivity:(bool)arg1;
- (void)setFullWidthBackgroundActivity:(bool)arg1;
- (void)setHasBoldTime:(bool)arg1;
- (void)setLegacyPhoneUsesiPadLayout:(bool)arg1;
- (void)setPromoteThermalWarning:(bool)arg1;
- (void)setRedInSpringBoard:(bool)arg1;
- (void)setShowVPNDisconnect:(bool)arg1;
- (void)setShowsDateBeforeTime:(bool)arg1;
- (void)setVisualProviderClassName:(id)arg1;
- (bool)showVPNDisconnect;
- (bool)showsDateBeforeTime;
- (id)visualProviderClassName;

@end
