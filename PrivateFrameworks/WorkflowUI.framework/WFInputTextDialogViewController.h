
@interface WFInputTextDialogViewController : WFCompactDialogViewController <UITextFieldDelegate, UITextViewDelegate> {
    NSLayoutConstraint * _adjustableTextFieldBottomAnchor;
    UIButton * _clearButton;
    NSDateFormatter * _dateFormatter;
    bool  _focusImmediatelyOnAppear;
    UILabel * _hintLabel;
    long long  _initialInsertionIndex;
    NSString * _localizedIncompleteHintString;
    NSString * _placeholder;
    UITextField * _textField;
    UITextView * _textView;
}

@property (nonatomic, retain) NSLayoutConstraint *adjustableTextFieldBottomAnchor;
@property (nonatomic) UIButton *clearButton;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool focusImmediatelyOnAppear;
@property (readonly) unsigned long long hash;
@property (nonatomic) UILabel *hintLabel;
@property (nonatomic) long long initialInsertionIndex;
@property (nonatomic, copy) NSString *localizedIncompleteHintString;
@property (nonatomic, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic) UITextField *textField;
@property (nonatomic) UITextView *textView;

- (void).cxx_destruct;
- (bool)actingAsNumberField;
- (id)adjustableTextFieldBottomAnchor;
- (bool)allowsDecimalNumbers;
- (id)clearButton;
- (void)clearText;
- (id)dateFormatter;
- (void)finishEditing;
- (void)finishWithInputtedText;
- (bool)focusImmediatelyOnAppear;
- (id)hintLabel;
- (long long)initialInsertionIndex;
- (void)loadView;
- (id)localizedIncompleteHintString;
- (void)negateText;
- (id)placeholder;
- (void)setAdjustableTextFieldBottomAnchor:(id)arg1;
- (void)setClearButton:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setFocusImmediatelyOnAppear:(bool)arg1;
- (void)setHintLabel:(id)arg1;
- (void)setInitialInsertionIndex:(long long)arg1;
- (void)setLocalizedIncompleteHintString:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateClearButtonVisibility;
- (void)updateDateFormattingHint;
- (void)updateTextViewPlaceholder;
- (bool)useNumberValidation;
- (void)viewWillAppear:(bool)arg1;

@end
