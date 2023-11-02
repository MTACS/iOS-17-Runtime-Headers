
@interface CAMFilterStatusIndicator : CAMControlStatusIndicator {
    bool  _on;
}

@property (getter=isOn, nonatomic) bool on;

- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (id)imageSymbolColorConfiguration;
- (bool)isOn;
- (void)setOn:(bool)arg1;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseOutline;

@end
