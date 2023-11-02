
@interface HUTitleButtonDescriptionCell : HUTitleDescriptionCell {
    bool  _buttonColorFollowsTintColor;
    UIFont * _buttonFont;
    NSString * _buttonText;
    <HUTitleButtonDescriptionCellDelegate> * _delegate;
    bool  _hideButton;
    UIButton * _valueButton;
}

@property (nonatomic) bool buttonColorFollowsTintColor;
@property (nonatomic, retain) UIFont *buttonFont;
@property (nonatomic, retain) NSString *buttonText;
@property (nonatomic) <HUTitleButtonDescriptionCellDelegate> *delegate;
@property (nonatomic) bool hideButton;
@property (nonatomic, retain) UIButton *valueButton;

- (void).cxx_destruct;
- (void)_updateButtonHidden;
- (bool)buttonColorFollowsTintColor;
- (id)buttonFont;
- (id)buttonText;
- (id)delegate;
- (void)handleRemoveAction:(id)arg1;
- (bool)hideButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setButtonColorFollowsTintColor:(bool)arg1;
- (void)setButtonFont:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideButton:(bool)arg1;
- (void)setValueButton:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)valueButton;

@end
