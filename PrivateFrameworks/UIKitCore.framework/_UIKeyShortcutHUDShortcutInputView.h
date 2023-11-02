
@interface _UIKeyShortcutHUDShortcutInputView : UIView {
    UILabel * _inputLabel;
    UIView * _inputLabelContainer;
    NSLayoutConstraint * _inputLabelWidthConstraint;
    bool  _inputStyledAsSingleCharacterOrSymbol;
    UIStackView * _labelStackView;
    UILabel * _modifiersLabel;
    NSLayoutConstraint * _modifiersLabelWidthConstraint;
    NSLayoutConstraint * _reservedInputWidthConstraint;
    NSLayoutConstraint * _reservedInputWidthSpacingConstraint;
    _UIKeyShortcutHUDShortcut * _shortcut;
    bool  _wantsCompressedWidth;
}

@property (nonatomic, retain) UILabel *inputLabel;
@property (nonatomic, retain) UIView *inputLabelContainer;
@property (nonatomic, readonly) double inputLabelWidth;
@property (nonatomic, retain) NSLayoutConstraint *inputLabelWidthConstraint;
@property (getter=isInputStyledAsSingleCharacterOrSymbol, nonatomic) bool inputStyledAsSingleCharacterOrSymbol;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) UILabel *modifiersLabel;
@property (nonatomic, readonly) double modifiersLabelWidth;
@property (nonatomic, retain) NSLayoutConstraint *modifiersLabelWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *reservedInputWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *reservedInputWidthSpacingConstraint;
@property (nonatomic) _UIKeyShortcutHUDShortcut *shortcut;
@property (nonatomic) UIColor *textColor;
@property (nonatomic) bool wantsCompressedWidth;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateInputLabelSpacing:(id)arg1;
- (void)_updateInputLabelStyle:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputLabel;
- (id)inputLabelContainer;
- (double)inputLabelWidth;
- (id)inputLabelWidthConstraint;
- (bool)isInputStyledAsSingleCharacterOrSymbol;
- (id)labelStackView;
- (id)modifiersLabel;
- (double)modifiersLabelWidth;
- (id)modifiersLabelWidthConstraint;
- (id)reservedInputWidthConstraint;
- (id)reservedInputWidthSpacingConstraint;
- (void)setInputLabel:(id)arg1;
- (void)setInputLabelContainer:(id)arg1;
- (void)setInputLabelWidthConstraint:(id)arg1;
- (void)setInputStyledAsSingleCharacterOrSymbol:(bool)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setModifiersLabel:(id)arg1;
- (void)setModifiersLabelWidthConstraint:(id)arg1;
- (void)setModifiersWidth:(double)arg1 inputWidth:(double)arg2;
- (void)setReservedInputWidthConstraint:(id)arg1;
- (void)setReservedInputWidthSpacingConstraint:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setWantsCompressedWidth:(bool)arg1;
- (id)shortcut;
- (id)textColor;
- (bool)wantsCompressedWidth;

@end
