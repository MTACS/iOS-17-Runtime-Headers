
@interface SBModalWidgetIntroductionBackgroundDescriptionView : UIView {
    UIView * _backgroundView;
    UIButton * _continueButton;
    UIImageView * _homescreenPreview;
    UILabel * _introductionTextLabel;
    UIView * _labelContainerView;
    UIViewController * _owner;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) UIImageView *homescreenPreview;
@property (nonatomic, retain) UILabel *introductionTextLabel;
@property (nonatomic, retain) UIView *labelContainerView;
@property (nonatomic) UIViewController *owner;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)continueButton;
- (id)homescreenPreview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOwner:(id)arg2;
- (id)introductionTextLabel;
- (id)labelContainerView;
- (id)owner;
- (void)setBackgroundView:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setHomescreenPreview:(id)arg1;
- (void)setIntroductionTextLabel:(id)arg1;
- (void)setLabelContainerView:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
