
@interface HUCameraFloatingMicrophoneButton : UIButton {
    UIVisualEffectView * _backgroundView;
    NAUILayoutConstraintSet * _constraintSet;
    UIImageView * _microphoneImageView;
    UILabel * _microphoneLabel;
}

@property (nonatomic, readonly) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) NAUILayoutConstraintSet *constraintSet;
@property (nonatomic, readonly) UIImageView *microphoneImageView;
@property (nonatomic, readonly) UILabel *microphoneLabel;

+ (id)_createBackgroundEffect;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraintSet;
- (void)_updateAlpha;
- (void)_updateSelectionState;
- (id)backgroundView;
- (id)constraintSet;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)microphoneImageView;
- (id)microphoneLabel;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateConstraints;

@end
