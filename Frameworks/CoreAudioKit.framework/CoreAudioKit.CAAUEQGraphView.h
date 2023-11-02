
@interface CoreAudioKit.CAAUEQGraphView : CoreAudioKit.CAAUGraphView {
    void accessibleElements;
    void activePointIndex;
    void controlList;
    void curve;
    void dataSource;
    void drawActivePointOnly;
    void gradientLayer;
    void paramCache;
    void plotActiveRangeOnly;
    void touchedParts;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)handleBeginGestureWithNotification:(id)arg1;
- (void)handleEndGestureWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)removeFromSuperview;
- (void)setAccessibilityElements:(id)arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
