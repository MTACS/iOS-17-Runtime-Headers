
@interface CPUIArtworkBackgroundView : UIView {
    void animationPauseTimer;
    void metalView;
    void renderer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scheduleAnimationPauseTimer;
- (void)setPaused:(bool)arg1;
- (void)updateWithImage:(id)arg1 animated:(bool)arg2;

@end
