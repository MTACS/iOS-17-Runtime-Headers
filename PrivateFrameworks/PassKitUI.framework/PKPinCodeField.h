
@interface PKPinCodeField : UIView <UIKeyInput> {
    struct { 
        double dashLength; 
        double dashWidth; 
        double hyphenOffset; 
    }  _config;
    NSArray * _dashViews;
    <PKPinCodeFieldDelegate> * _delegate;
    UIImage * _dotImage;
    NSArray * _dotViews;
    double  _fontHeight;
    UILabel * _hyphenLabel;
    bool  _hyphenatePinCode;
    bool  _keyboardOverrideEnabled;
    NSArray * _numberLabels;
    NSCharacterSet * _numbersOnlyCharacterSet;
    NSMutableString * _pinCode;
    unsigned long long  _pinCodeLength;
    bool  _secureTextEntry;
    unsigned long long  _style;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPinCodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hyphenatePinCode;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic, copy) NSString *pinCode;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (bool)hasText;
- (bool)hyphenatePinCode;
- (id)initWithPinCodeLength:(unsigned long long)arg1 delegate:(id)arg2;
- (id)initWithPinCodeLength:(unsigned long long)arg1 style:(unsigned long long)arg2 delegate:(id)arg3;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardType;
- (void)layoutSubviews;
- (id)pinCode;
- (void)setDelegate:(id)arg1;
- (void)setHyphenatePinCode:(bool)arg1;
- (void)setPinCode:(id)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCharacterVisibility;

@end
