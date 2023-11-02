
@interface AnalogHandsView : CLKUIAnalogHandsView {
    double  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

- (void)_startNewSecondHandAnimation;
- (void)_stopHandAnimation;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;
- (id)hourHandConfiguration;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)minuteHandConfiguration;
- (id)secondHandConfiguration;
- (void)setOverrideDate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
