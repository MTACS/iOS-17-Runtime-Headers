
@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton {
    bool  _on;
}

@property (getter=isOn, nonatomic) bool on;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (id)imageSymbolColorConfiguration;
- (bool)isOn;
- (bool)isSelfExpanding;
- (void)setOn:(bool)arg1;
- (bool)shouldUseActiveTintForCurrentState;

@end
