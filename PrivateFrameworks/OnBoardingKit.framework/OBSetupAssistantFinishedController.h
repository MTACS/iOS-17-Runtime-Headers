
@interface OBSetupAssistantFinishedController : OBBaseWelcomeController {
    OBBoldTrayButton * _boldButton;
    id /* block */  _boldButtonBlock;
    OBButtonTray * _buttonTray;
    UILabel * _instructionalLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) OBBoldTrayButton *boldButton;
@property (nonatomic, copy) id /* block */ boldButtonBlock;
@property (nonatomic, retain) OBButtonTray *buttonTray;
@property (nonatomic, retain) UILabel *instructionalLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_headerFont;
- (id)_instructionFont;
- (id)boldButton;
- (id /* block */)boldButtonBlock;
- (void)buttonTapped:(id)arg1;
- (id)buttonTray;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (id)initWithTitle:(id)arg1;
- (id)instructionalLabel;
- (void)setBoldButton:(id)arg1;
- (void)setBoldButtonBlock:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1 action:(id /* block */)arg2;
- (void)setButtonTray:(id)arg1;
- (void)setInstructionalLabel:(id)arg1;
- (void)setInstructionalText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
