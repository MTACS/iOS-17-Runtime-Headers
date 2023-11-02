
@interface MSDCodeEntryView : UIView <CAAnimationDelegate, UIKeyInput> {
    NSArray * _activeConstraints;
    <MSDCodeEntryViewDelegate> * _delegate;
    NSArray * _generatorFields;
    NSMutableString * _stringValue;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MSDCodeEntryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, retain) NSArray *generatorFields;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic, retain) NSMutableString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, copy) NSString *textContentType;

+ (id)generatorFieldFont;

- (void).cxx_destruct;
- (void)_syncStringValueToLabels;
- (id)activeConstraints;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)clearEntry;
- (id)delegate;
- (void)deleteBackward;
- (id)generatorFields;
- (bool)hasText;
- (id)initWithDelegate:(id)arg1;
- (void)insertText:(id)arg1;
- (void)jiggleAView;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)setActiveConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeneratorFields:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)stringValue;
- (id)tapGestureRecognizer;
- (void)updateConstraints;

@end
