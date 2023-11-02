
@interface WeatherMaps.MapScrubberOverlayUIView : UIView {
    void affordanceActionIcon;
    void affordanceIconSpacing;
    void affordanceTextSpacing;
    void bar;
    void barVerticalSpacing;
    void buttonTouchInsets;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void dateLabel;
    void delegate;
    void horizontalPadding;
    void horizontalPaddingPlay;
    void horizontalPaddingPlayToTitle;
    void menuWasOpened;
    void minimumHeight;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void playPauseButton;
    void regularBreakpointWidth;
    void representsIsPlaying;
    void scrubberLayoutStyle;
    void titleButton;
    void titleDateContainer;
    void titleLabel;
    void verticalPadding;
    void wideBreakpointWidth;
}

- (void).cxx_destruct;
- (void)barTouched:(id)arg1;
- (void)barValueChanged:(id)arg1;
- (void)didReceiveMenuAction:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)playPauseTapped;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
