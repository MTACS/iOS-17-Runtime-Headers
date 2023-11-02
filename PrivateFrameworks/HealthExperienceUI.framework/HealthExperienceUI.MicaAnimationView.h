
@interface HealthExperienceUI.MicaAnimationView : UIView {
    void animation;
    void insetSize;
    void loopCount;
    void originalPackageSize;
    void package;
    void packageLayer;
    void previousViewSize;
    void scaleToFill;
    void state;
    void stateController;
    void transitionSpeed;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)stepAnimationForLayer:(id)arg1;

@end
