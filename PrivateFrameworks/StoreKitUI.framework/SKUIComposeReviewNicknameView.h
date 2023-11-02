
@interface SKUIComposeReviewNicknameView : UIView {
    UIView * _nicknameBackgroundView;
    UILabel * _nicknameInfoLabel;
    UILabel * _nicknamePlaceholderLabel;
    UITextField * _nicknameTextfield;
    SKUIGradientView * _sampleCardGradientView;
    SKUIComposeReviewSampleCardView * _sampleCardView;
    UILabel * _titleView;
}

@property (nonatomic, retain) UIView *nicknameBackgroundView;
@property (nonatomic, retain) UILabel *nicknameInfoLabel;
@property (nonatomic, retain) UILabel *nicknamePlaceholderLabel;
@property (nonatomic, retain) UITextField *nicknameTextfield;
@property (nonatomic, retain) SKUIGradientView *sampleCardGradientView;
@property (nonatomic, retain) SKUIComposeReviewSampleCardView *sampleCardView;
@property (nonatomic, retain) UILabel *titleView;

- (void).cxx_destruct;
- (void)_setupInfo;
- (void)_setupSampleCardView;
- (void)_setupTextField;
- (void)_setupTitle;
- (void)_setupView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nicknameBackgroundView;
- (id)nicknameInfoLabel;
- (id)nicknamePlaceholderLabel;
- (id)nicknameTextfield;
- (id)sampleCardGradientView;
- (id)sampleCardView;
- (void)setNicknameBackgroundView:(id)arg1;
- (void)setNicknameInfoLabel:(id)arg1;
- (void)setNicknamePlaceholderLabel:(id)arg1;
- (void)setNicknameTextfield:(id)arg1;
- (void)setSampleCardGradientView:(id)arg1;
- (void)setSampleCardView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)titleView;
- (void)traitCollectionDidChange:(id)arg1;

@end
