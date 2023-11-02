
@interface CoreAudioKit.AUDelayGraphView : CoreAudioKit.CAAUGraphView {
    void accessibilityDecimalFormatter;
    void accessibilityParam;
    void accessibilityTimeFormatter;
    void dataSource;
    void defaultMax;
    void delayLayers;
    void graphActivated;
    void invert;
    void pointLayer;
    void xMinorGridCount;
    void xMinorGrids;
    void zoomFactor;
}

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
