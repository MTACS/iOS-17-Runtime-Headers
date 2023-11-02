
@interface PKListTextFieldContentConfiguration : NSObject <UIContentConfiguration> {
    long long  _autocorrectionType;
    UIListContentConfiguration * _backingConfig;
    bool  _clearsOnBeginEditing;
    bool  _clearsOnInsertion;
    NSError * _error;
    UIColor * _errorColor;
    bool  _focusTextField;
    id /* block */  _hasErrorHandler;
    long long  _keyboardType;
    unsigned long long  _mode;
    NSString * _placeholderText;
    long long  _returnKeyType;
}

@property (nonatomic) long long autocorrectionType;
@property (nonatomic) bool clearsOnBeginEditing;
@property (nonatomic) bool clearsOnInsertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalLayoutMargins;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) UIColor *errorColor;
@property (nonatomic) bool focusTextField;
@property (nonatomic, copy) id /* block */ hasErrorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardType;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, readonly) UIListContentTextProperties *secondaryTextProperties;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) UIListContentTextProperties *textProperties;
@property (nonatomic) double textToSecondaryTextHorizontalPadding;
@property (nonatomic) double textToSecondaryTextVerticalPadding;

+ (id)cellConfiguration;
+ (id)valueCellConfiguration;

- (void).cxx_destruct;
- (bool)_isEqualToListTextFieldContentConfiguration:(id)arg1;
- (long long)autocorrectionType;
- (bool)clearsOnBeginEditing;
- (bool)clearsOnInsertion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (id)error;
- (id)errorColor;
- (bool)focusTextField;
- (id /* block */)hasErrorHandler;
- (unsigned long long)hash;
- (id)initWithBackingConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)keyboardType;
- (id)makeContentView;
- (unsigned long long)mode;
- (id)placeholderText;
- (long long)returnKeyType;
- (id)secondaryText;
- (id)secondaryTextProperties;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setClearsOnBeginEditing:(bool)arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setError:(id)arg1;
- (void)setErrorColor:(id)arg1;
- (void)setFocusTextField:(bool)arg1;
- (void)setHasErrorHandler:(id /* block */)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextToSecondaryTextHorizontalPadding:(double)arg1;
- (void)setTextToSecondaryTextVerticalPadding:(double)arg1;
- (id)text;
- (id)textProperties;
- (double)textToSecondaryTextHorizontalPadding;
- (double)textToSecondaryTextVerticalPadding;
- (id)updatedConfigurationForState:(id)arg1;

@end
