
@interface MULabeledValueActionTextFieldRowView : MUPlaceSectionRowView <UITextViewDelegate> {
    <MULabeledValueActionTextFieldRowViewDelegate> * _delegate;
    unsigned long long  _maximumNumberOfCharacters;
    UIColor * _placeholderColor;
    UIView<MULabelViewProtocol> * _titleLabel;
    UILayoutGuide * _titleValueLayoutGuide;
    UITextView * _valueTextField;
}

@property (nonatomic, copy) NSString *currentTextFieldValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MULabeledValueActionTextFieldRowViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumNumberOfCharacters;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic, retain) NSString *placeholderText;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (bool)becomeFirstResponder;
- (id)currentTextFieldValue;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (unsigned long long)maximumNumberOfCharacters;
- (unsigned long long)maximumNumberOfLines;
- (id)placeholderColor;
- (id)placeholderText;
- (bool)resignFirstResponder;
- (void)setCurrentTextFieldValue:(id)arg1;
- (void)setCurrentTextFieldValueIfNeeded:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNumberOfCharacters:(unsigned long long)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)titleText;

@end
