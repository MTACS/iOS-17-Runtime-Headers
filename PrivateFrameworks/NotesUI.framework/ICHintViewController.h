
@interface ICHintViewController : ICPillOrnamentViewController {
    UIButton * _actionButton;
    UIStackView * _actionButtonStackView;
    UIView * _actionButtonTopSpacerView;
    UIView * _actionButtonTrailingSpacerView;
    id /* block */  _buttonAction;
    NSString * _buttonTitle;
    UIButton * _closeButton;
    UIStackView * _contentStackView;
    UIStackView * _hintStackView;
    NSString * _hintSubtitle;
    UILabel * _hintSubtitleLabel;
    NSString * _hintTitle;
    UILabel * _hintTitleLabel;
    bool  _showsCloseButton;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UIStackView *actionButtonStackView;
@property (nonatomic, retain) UIView *actionButtonTopSpacerView;
@property (nonatomic, retain) UIView *actionButtonTrailingSpacerView;
@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) UIStackView *contentStackView;
@property (nonatomic, retain) UIStackView *hintStackView;
@property (nonatomic, copy) NSString *hintSubtitle;
@property (nonatomic, retain) UILabel *hintSubtitleLabel;
@property (nonatomic, copy) NSString *hintTitle;
@property (nonatomic, retain) UILabel *hintTitleLabel;
@property (nonatomic, readonly) bool showsCloseButton;

- (void).cxx_destruct;
- (id)actionButton;
- (id)actionButtonStackView;
- (id)actionButtonTopSpacerView;
- (id)actionButtonTrailingSpacerView;
- (id /* block */)buttonAction;
- (id)buttonTitle;
- (id)closeButton;
- (id)contentStackView;
- (id)hintStackView;
- (id)hintSubtitle;
- (id)hintSubtitleLabel;
- (id)hintTitle;
- (id)hintTitleLabel;
- (id)initWithRootViewController:(id)arg1 showsCloseButton:(bool)arg2 hintTitle:(id)arg3 hintSubtitle:(id)arg4 buttonTitle:(id)arg5 buttonAction:(id /* block */)arg6;
- (void)setActionButton:(id)arg1;
- (void)setActionButtonStackView:(id)arg1;
- (void)setActionButtonTopSpacerView:(id)arg1;
- (void)setActionButtonTrailingSpacerView:(id)arg1;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setContentStackView:(id)arg1;
- (void)setHintStackView:(id)arg1;
- (void)setHintSubtitle:(id)arg1;
- (void)setHintSubtitleLabel:(id)arg1;
- (void)setHintTitle:(id)arg1;
- (void)setHintTitleLabel:(id)arg1;
- (bool)showsCloseButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
