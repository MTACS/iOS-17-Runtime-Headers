
@interface ClockPoster.WorldPinView : UIControl {
    void centerDot;
    void currentLocationStroke;
    void delegate;
    void displayedSelectionState;
    void scaleAnimationKey;
    void selectedStroke;
    void selectionState;
}

- (void).cxx_destruct;
- (void)didSelect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
