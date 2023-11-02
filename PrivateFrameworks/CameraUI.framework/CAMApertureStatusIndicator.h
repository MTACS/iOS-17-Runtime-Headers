
@interface CAMApertureStatusIndicator : CAMControlStatusIndicator {
    double  _apertureValue;
    bool  _on;
}

@property (nonatomic) double apertureValue;
@property (getter=isOn, nonatomic) bool on;

- (double)apertureValue;
- (bool)canShowValue;
- (id)imageNameForCurrentState;
- (bool)isOn;
- (void)setApertureValue:(double)arg1;
- (void)setOn:(bool)arg1;
- (bool)shouldUseActiveTintForCurrentState;
- (id)valueText;

@end
