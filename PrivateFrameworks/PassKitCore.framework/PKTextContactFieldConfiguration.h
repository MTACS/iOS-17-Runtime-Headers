
@interface PKTextContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding> {
    NSCharacterSet * _characterSet;
    NSString * _displayFormat;
    NSString * _displayFormatPlaceholder;
    bool  _isValidCharacterSet;
    bool  _keepPaddingCharactersForSubmission;
    long long  _maxLength;
    long long  _minLength;
    bool  _numeric;
    NSRegularExpression * _validRegex;
}

@property (nonatomic, readonly) NSCharacterSet *characterSet;
@property (nonatomic, readonly, copy) NSString *displayFormat;
@property (nonatomic, readonly, copy) NSString *displayFormatPlaceholder;
@property (nonatomic, readonly) bool isValidCharacterSet;
@property (nonatomic, readonly) bool keepPaddingCharactersForSubmission;
@property (nonatomic, readonly) long long maxLength;
@property (nonatomic, readonly) long long minLength;
@property (getter=isNumeric, nonatomic, readonly) bool numeric;
@property (nonatomic, readonly) NSRegularExpression *validRegex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characterSet;
- (id)description;
- (id)displayFormat;
- (id)displayFormatPlaceholder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isNumeric;
- (bool)isValidCharacterSet;
- (bool)keepPaddingCharactersForSubmission;
- (long long)maxLength;
- (long long)minLength;
- (id)validRegex;

@end
