
@interface OBPasscodeField : UIStackView <UIKeyInput> {
    <OBPasscodeFieldDelegate> * _delegate;
    NSArray * _dotViews;
    bool  _enabled;
    unsigned long long  _numberOfEntryFields;
    NSMutableString * _value;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <OBPasscodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dotViews;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, retain) NSMutableString *value;

- (void).cxx_destruct;
- (void)_passcodeFieldTapped:(id)arg1;
- (void)_updateDots;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (id)dotViews;
- (bool)hasText;
- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isEnabled;
- (bool)isSecureTextEntry;
- (long long)keyboardType;
- (unsigned long long)numberOfEntryFields;
- (void)setDelegate:(id)arg1;
- (void)setDotViews:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNumberOfEntryFields:(unsigned long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (id)value;

@end
