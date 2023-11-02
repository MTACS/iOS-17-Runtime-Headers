
@interface SBHIconZoomSettings : SBHIconAnimationSettings {
    bool  _labelAlphaWithZoom;
}

@property (nonatomic) bool labelAlphaWithZoom;

+ (id)settingsControllerModule;

- (bool)labelAlphaWithZoom;
- (void)setDefaultValues;
- (void)setLabelAlphaWithZoom:(bool)arg1;

@end
