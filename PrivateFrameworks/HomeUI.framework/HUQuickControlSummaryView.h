
@interface HUQuickControlSummaryView : UIView <HUBaseIconViewDelegate> {
    HUBaseIconView * _baseIconView;
    NSLayoutConstraint * _baseIconViewWidthConstraint;
    NSMutableArray * _contentConstraints;
    HUIconView * _iconView;
    UIImage * _image;
    UIImageView * _imageView;
    NSAttributedString * _microphoneStatusText;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UILabel * _secondaryLabel;
    UIVisualEffectView * _secondaryLabelEffectView;
    NSString * _secondaryText;
    UIStackView * _verticalStackView;
}

@property (nonatomic, retain) HUBaseIconView *baseIconView;
@property (nonatomic, retain) NSLayoutConstraint *baseIconViewWidthConstraint;
@property (nonatomic, retain) NSMutableArray *contentConstraints;
@property (nonatomic, readonly) HUIconView *iconView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, copy) NSAttributedString *microphoneStatusText;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIVisualEffectView *secondaryLabelEffectView;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, retain) UIStackView *verticalStackView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)baseIconView;
- (void)baseIconViewDidUpdateConfiguration:(id)arg1;
- (id)baseIconViewWidthConstraint;
- (id)contentConstraints;
- (id)iconView;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)microphoneStatusText;
- (id)primaryLabel;
- (id)primaryText;
- (id)secondaryLabel;
- (id)secondaryLabelEffectView;
- (id)secondaryText;
- (void)setBaseIconView:(id)arg1;
- (void)setBaseIconViewWidthConstraint:(id)arg1;
- (void)setContentConstraints:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMicrophoneStatusText:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryLabelEffectView:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setVerticalStackView:(id)arg1;
- (void)updateConstraints;
- (id)verticalStackView;

@end
