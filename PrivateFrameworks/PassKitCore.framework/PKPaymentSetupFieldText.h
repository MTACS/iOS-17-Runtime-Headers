
@interface PKPaymentSetupFieldText : PKPaymentSetupField {
    NSCharacterSet * _allowedCharacters;
    NSNumberFormatter * _amountFormatter;
    NSString * _currencyCode;
    NSNumberFormatter * _currencyFormatter;
    NSString * _displayFormatPlaceholder;
    bool  _keepPaddingCharactersForSubmission;
    bool  _luhnCheck;
    unsigned long long  _maxLength;
    unsigned long long  _minLength;
    bool  _numeric;
    NSArray * _paddingCharacters;
    bool  _secureText;
    bool  _secureVisibleText;
}

@property (nonatomic, copy) NSCharacterSet *allowedCharacters;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *displayFormatPlaceholder;
@property (nonatomic) bool keepPaddingCharactersForSubmission;
@property (getter=useLuhnCheck, nonatomic) bool luhnCheck;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;
@property (getter=isNumeric, nonatomic) bool numeric;
@property (nonatomic, retain) NSArray *paddingCharacters;
@property (getter=isSecureText, nonatomic) bool secureText;
@property (getter=isSecureVisibleText, nonatomic) bool secureVisibleText;

+ (id)readOnlyPaymentSetupFieldWithDisplayName:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)_submissionStringForValue:(id)arg1;
- (id)allowedCharacters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)displayFormatPaddingCharacters;
- (id)displayFormatPlaceholder;
- (id)displayString;
- (unsigned long long)fieldType;
- (bool)hasDisplayFormat;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isNumeric;
- (bool)isSecureText;
- (bool)isSecureVisibleText;
- (bool)keepPaddingCharactersForSubmission;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (id)paddingCharacters;
- (void)setAllowedCharacters:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDisplayFormatPlaceholder:(id)arg1;
- (void)setKeepPaddingCharactersForSubmission:(bool)arg1;
- (void)setLuhnCheck:(bool)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setMinLength:(unsigned long long)arg1;
- (void)setNumeric:(bool)arg1;
- (void)setPaddingCharacters:(id)arg1;
- (void)setSecureText:(bool)arg1;
- (void)setSecureVisibleText:(bool)arg1;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (bool)submissionStringMeetsAllRequirements;
- (void)updateDisplayFormat:(id)arg1;
- (void)updateWithAttribute:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;
- (bool)useLuhnCheck;

@end
