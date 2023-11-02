
@interface WDProfileTableViewCell : UITableViewCell <UITextFieldDelegate> {
    NSArray * _accessibilitySizeConstraints;
    UIButton * _clearButton;
    NSLayoutConstraint * _clearButtonWidthAnchor;
    NSString * _displayName;
    UILabel * _displayNameLabel;
    NSString * _displayValue;
    NSLayoutConstraint * _displayValueLeadingAnchor;
    UITextField * _displayValueTextField;
    NSLayoutConstraint * _displayValueTrailingConstraint;
    UIView * _inputAccessoryView;
    UIView * _inputView;
    UIColor * _normalDisplayValueColor;
    NSArray * _normalSizeConstraints;
    NSString * _placeholderValue;
    UIColor * _selectedDisplayValueColor;
    bool  _shouldDisplayClearButtonDuringEditing;
    bool  _shouldUseSelectedColorForDisplayValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) UILabel *displayNameLabel;
@property (nonatomic, copy) NSString *displayValue;
@property (nonatomic, retain) UITextField *displayValueTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, copy) NSString *placeholderValue;
@property (nonatomic) bool shouldDisplayClearButtonDuringEditing;
@property (nonatomic) bool shouldUseSelectedColorForDisplayValue;
@property (readonly) Class superclass;

+ (double)editingTrailingEdgeMargin;
+ (double)notEditingTrailingEdgeMargin;

- (void).cxx_destruct;
- (void)_setupAccessibilitySizeConstraintsWithTrailingConstant:(double)arg1;
- (void)_setupConstraints;
- (void)_setupConstraintsForContentSize;
- (void)_setupNonAccessibilitySizeConstraints;
- (void)_setupUI;
- (void)_updateClearButtonState;
- (void)_updateForCurrentSizeCategory;
- (void)addClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)displayName;
- (id)displayNameLabel;
- (id)displayValue;
- (id)displayValueTextField;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)inputAccessoryView;
- (id)inputView;
- (id)placeholderValue;
- (void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLabel:(id)arg1;
- (void)setDisplayValue:(id)arg1;
- (void)setDisplayValueTextField:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setPlaceholderValue:(id)arg1;
- (void)setShouldDisplayClearButtonDuringEditing:(bool)arg1;
- (void)setShouldUseSelectedColorForDisplayValue:(bool)arg1;
- (bool)shouldDisplayClearButtonDuringEditing;
- (bool)shouldUseSelectedColorForDisplayValue;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAutomationIdentifiersForProfileDetail:(id)arg1;

@end
