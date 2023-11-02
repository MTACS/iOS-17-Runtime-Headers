
@interface CAMIntensityStatusIndicator : CAMControlStatusIndicator {
    bool  _on;
}

@property (getter=isOn, nonatomic) bool on;

- (id)imageNameForCurrentState;
- (bool)isOn;
- (void)setOn:(bool)arg1;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseOutline;

@end
