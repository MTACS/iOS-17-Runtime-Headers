
@interface UIKeyboardGlobeKeyIntroductionView : UIView {
    _UIBackdropView * _backdropView;
    id /* block */  _completionBlock;
    UIButton * _continueButton;
    UITextView * _descriptionLabel;
    NSDate * _startDate;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) UITextView *descriptionLabel;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (long long)backdropStyleForRenderConfig:(id)arg1;
- (id)backdropView;
- (id /* block */)completionBlock;
- (id)continueButton;
- (void)continueButtonTapped;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)startDate;
- (id)titleLabel;

@end
