
@interface CPSInformationTemplateButtonsViewController : UIViewController {
    <CPSButtonDelegate> * _buttonDelegate;
    UIStackView * _buttonStackView;
    NSArray * _buttons;
    NSLayoutConstraint * _heightConstraint;
    unsigned long long  _preferredButtonIndex;
}

@property (nonatomic) <CPSButtonDelegate> *buttonDelegate;
@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) unsigned long long preferredButtonIndex;

- (void).cxx_destruct;
- (void)_updateButtons;
- (void)_updateHeight;
- (id)buttonDelegate;
- (id)buttonStackView;
- (id)buttons;
- (id)heightConstraint;
- (id)initWithButtons:(id)arg1 buttonDelegate:(id)arg2;
- (unsigned long long)preferredButtonIndex;
- (id)preferredFocusEnvironments;
- (void)setButtonDelegate:(id)arg1;
- (void)setButtonIdentifier:(id)arg1 enabled:(bool)arg2;
- (void)setButtonStackView:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setPreferredButtonIndex:(unsigned long long)arg1;
- (void)viewDidLoad;

@end
