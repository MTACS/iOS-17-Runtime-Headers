
@interface TVRPasscodeField : UIControl <UIKeyInput> {
    TVRCPINEntryAttributes * _PINEntryattributes;
    NSMutableString * _mutablePasscode;
    bool  _useSystemColors;
}

@property (nonatomic, retain) TVRCPINEntryAttributes *PINEntryattributes;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, retain) NSMutableString *mutablePasscode;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) bool useSystemColors;

- (void).cxx_destruct;
- (id)PINEntryattributes;
- (struct CGSize { double x1; double x2; })_contentSize;
- (double)_contentWidthWithDotSize:(double)arg1 entrySpacing:(double)arg2 groupSpacing:(double)arg3;
- (bool)acceptsFloatingKeyboard;
- (bool)acceptsSplitKeyboard;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)canBecomeFirstResponder;
- (void)clear;
- (void)deleteBackward;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)enablesReturnKeyAutomatically;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (id)mutablePasscode;
- (long long)returnKeyType;
- (void)setMutablePasscode:(id)arg1;
- (void)setPINEntryattributes:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUseSystemColors:(bool)arg1;
- (long long)spellCheckingType;
- (id)text;
- (bool)useSystemColors;

@end
