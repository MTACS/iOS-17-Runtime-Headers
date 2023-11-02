
@interface SBHIconSettings : PTSettings {
    bool  _alwaysHitTestNearestIcon;
    SBFParallaxSettings * _badgeParallaxSettings;
    double  _iconHitboxPaddingX;
    double  _iconHitboxPaddingY;
    SBFParallaxSettings * _iconParallaxSettings;
    bool  _suppressJitter;
}

@property (nonatomic) bool alwaysHitTestNearestIcon;
@property (nonatomic, retain) SBFParallaxSettings *badgeParallaxSettings;
@property (nonatomic) double iconHitboxPaddingX;
@property (nonatomic) double iconHitboxPaddingY;
@property (nonatomic, retain) SBFParallaxSettings *iconParallaxSettings;
@property (nonatomic) bool suppressJitter;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)alwaysHitTestNearestIcon;
- (id)badgeParallaxSettings;
- (double)iconHitboxPaddingX;
- (double)iconHitboxPaddingY;
- (id)iconParallaxSettings;
- (void)setAlwaysHitTestNearestIcon:(bool)arg1;
- (void)setBadgeParallaxSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setIconHitboxPaddingX:(double)arg1;
- (void)setIconHitboxPaddingY:(double)arg1;
- (void)setIconParallaxSettings:(id)arg1;
- (void)setSuppressJitter:(bool)arg1;
- (bool)suppressJitter;

@end
