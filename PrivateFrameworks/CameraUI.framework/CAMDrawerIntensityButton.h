
@interface CAMDrawerIntensityButton : CAMControlDrawerCustomButton {
    bool  _on;
}

@property (getter=isOn, nonatomic) bool on;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (bool)isOn;
- (void)setOn:(bool)arg1;
- (bool)shouldUseActiveTintForCurrentState;

@end
