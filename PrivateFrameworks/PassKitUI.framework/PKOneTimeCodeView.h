
@interface PKOneTimeCodeView : UIView <UITextFieldDelegate> {
    NSArray * _codeFields;
    double  _codeLength;
    NSArray * _constraints;
    <PKOneTimeCodeViewDelegate> * _delegate;
    bool  _disableEntry;
    unsigned long long  _entryError;
    PKIconTextLabel * _entryErrorLabel;
    double  _entrySpacing;
    UITextField * _invisibleTextField;
    NSCharacterSet * _nonNumericCharSet;
    UITapGestureRecognizer * _tapGestureRecognizer;
    PKOneTimeCodeDigitFieldView * _templateField;
    NSString * _value;
}

@property (nonatomic, readonly) double codeLength;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableEntry;
@property (nonatomic) unsigned long long entryError;
@property (nonatomic) double entrySpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_firstCodeField;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_passcodeFieldTapped:(id)arg1;
- (void)_updateLabels;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)clearCurrentCode;
- (double)codeLength;
- (id)currentCode;
- (bool)disableEntry;
- (unsigned long long)entryError;
- (double)entrySpacing;
- (bool)hasText;
- (id)initWithCodeLength:(long long)arg1 delegate:(id)arg2;
- (bool)isFirstResponder;
- (bool)isSecureTextEntry;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)setBackgroundColor:(id)arg1;
- (void)setDisableEntry:(bool)arg1;
- (void)setEntryError:(unsigned long long)arg1;
- (void)setEntrySpacing:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
