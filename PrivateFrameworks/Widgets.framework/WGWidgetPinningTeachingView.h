
@interface WGWidgetPinningTeachingView : UIView {
    UILabel * _bodyLabel;
    UIView * _contentView;
    <WGWidgetPinningTeachingViewDelegate> * _delegate;
    WGWidgetPinningTeachingAnimationView * _iconImageView;
    UIButton * _noButton;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelToBodyLabelConstraint;
    NSLayoutConstraint * _titleLabelTopConstraint;
    UIButton * _yesButton;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) <WGWidgetPinningTeachingViewDelegate> *delegate;
@property (nonatomic, retain) WGWidgetPinningTeachingAnimationView *iconImageView;
@property (nonatomic, retain) UIButton *noButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelToBodyLabelConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTopConstraint;
@property (nonatomic, retain) UIButton *yesButton;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_createConstraints;
- (void)_createContainerViews;
- (void)_createContentViews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_noButtonTapped;
- (void)_setupButtonsTargets;
- (void)_updateAppearance;
- (void)_updateFontDependantConstraints;
- (void)_updateFonts;
- (void)_yesButtonTapped;
- (id)bodyLabel;
- (id)contentView;
- (id)delegate;
- (id)iconImageView;
- (id)init;
- (id)noButton;
- (void)setBodyLabel:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setNoButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelToBodyLabelConstraint:(id)arg1;
- (void)setTitleLabelTopConstraint:(id)arg1;
- (void)setYesButton:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)titleLabel;
- (id)titleLabelToBodyLabelConstraint;
- (id)titleLabelTopConstraint;
- (id)yesButton;

@end
