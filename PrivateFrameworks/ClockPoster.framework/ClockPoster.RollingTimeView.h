
@interface ClockPoster.RollingTimeView : UIView {
    void $__lazy_storage_$_colonBlurViews;
    void $__lazy_storage_$_redModeColonLayers;
    void blurColon;
    void compositingFilter;
    void delegate;
    void isAnimating;
    void maxScale;
    void offScreenTimeLabel;
    void overlap;
    void timeLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeString;
    void timeTextListenerTask;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeZone;
    void transformModifier;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
