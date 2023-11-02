
@interface GameCenterUI.DetailView : UIView {
    void accessory;
    void accessoryAction;
    void accessoryView;
    void chevronView;
    void disabled;
    void gameControllerSelectHandler;
    void imageView;
    void selectionHandler;
    void separator;
    void style;
    void subtitleLabel;
    void tapGestureRecognizer;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)didTapWithAccessoryView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)wasTapped;

@end
