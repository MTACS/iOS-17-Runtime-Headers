
@interface SeymourUI.TVQueueListLockupView : SeymourUI.TVFloatingContentCell {
    void delegate;
    void grabImage;
    void grabImageView;
    void grabbed;
    void layout;
    void movedIndexInCurrentPan;
    void offsetPerMove;
    void panOriginYOffset;
    void subtitleLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)shouldUpdateFocusInContext:(id)arg1;

@end
