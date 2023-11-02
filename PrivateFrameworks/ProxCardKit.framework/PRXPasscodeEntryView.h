
@interface PRXPasscodeEntryView : UIControl <UIKeyInput> {
    <PRXPasscodeEntryViewDelegate> * _delegate;
    long long  _keyboardType;
    long long  _numberOfDigits;
    NSMutableString * _text;
    bool  _useMonospacedFont;
    NSArray * _wells;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRXPasscodeEntryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) long long numberOfDigits;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) bool useMonospacedFont;

+ (id)fontForNumberOfDigits:(long long)arg1 useMonospacedFont:(bool)arg2;
+ (double)interWellSpacingForNumberOfDigits:(long long)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForNumberOfDigits:(long long)arg1;
+ (double)wellCornerRadiusForNumberOfDigits:(long long)arg1;
+ (struct CGSize { double x1; double x2; })wellSizeForNumberOfDigits:(long long)arg1;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateWells;
- (long long)autocapitalizationType;
- (bool)becomeFirstResponder;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithNumberOfDigits:(long long)arg1 useMonospacedFont:(bool)arg2 delegate:(id)arg3;
- (void)insertText:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)keyboardType;
- (long long)numberOfDigits;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setText:(id)arg1;
- (long long)spellCheckingType;
- (id)text;
- (void)tintColorDidChange;
- (bool)useMonospacedFont;

@end
