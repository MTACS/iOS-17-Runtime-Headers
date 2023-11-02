
@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton {
    bool  _disabled;
    bool  _on;
}

@property (getter=isDisabled, nonatomic) bool disabled;
@property (getter=isOn, nonatomic) bool on;

- (bool)adjustsImageWhenDisabled;
- (long long)controlType;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (bool)isDisabled;
- (bool)isOn;
- (void)setDisabled:(bool)arg1;
- (void)setDisabled:(bool)arg1 animated:(bool)arg2;
- (void)setOn:(bool)arg1;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
