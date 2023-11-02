
@interface WBSTOTPGenerator : NSObject <NSSecureCoding> {
    NSString * _accountName;
    unsigned long long  _algorithm;
    NSArray * _cachedHeuristicallyDeterminedServiceNameHints;
    unsigned long long  _codeGenerationPeriod;
    NSDate * _initialDate;
    NSString * _issuer;
    NSData * _key;
    unsigned long long  _numberOfDigitsInCode;
    NSURL * _originalURL;
}

@property (nonatomic, readonly, copy) NSString *accountName;
@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) unsigned long long codeGenerationPeriod;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSURL *exportableURL;
@property (nonatomic, readonly, copy) NSArray *heuristicallyDeterminedServiceNameHints;
@property (nonatomic, readonly) NSDate *initialDate;
@property (nonatomic, readonly, copy) NSString *issuer;
@property (nonatomic, readonly) unsigned long long numberOfDigitsInCode;
@property (nonatomic, copy) NSURL *originalURL;

+ (id)_base32EncodedStringForKeyData:(id)arg1;
+ (id)_keyDataForBase32EncodedString:(id)arg1;
+ (bool)_urlWithComponentsHasValidOtpauthURLScheme:(id)arg1;
+ (id)countdownStringForMultipleCodesWithSecondsRemaining:(long long)arg1;
+ (id)countdownStringForSecondsRemaining:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_HMACLengthForAlgorithm:(unsigned long long)arg1;
- (unsigned long long)_algorithmForQueryItemValue:(id)arg1;
- (unsigned int)_commonCryptoAlgorithmForTOTPAlgorithm:(unsigned long long)arg1;
- (unsigned long long)_numberOfIntervalsSinceInitialDateForDate:(id)arg1;
- (id)_stringForAlgorithm:(unsigned long long)arg1;
- (id)accountName;
- (unsigned long long)algorithm;
- (id)codeForDate:(id)arg1;
- (unsigned long long)codeGenerationPeriod;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)exportableURL;
- (bool)generatesIdenticalCodesToGenerator:(id)arg1;
- (unsigned long long)hash;
- (id)heuristicallyDeterminedServiceNameHints;
- (id)initWithASCIIEncodedKey:(id)arg1 initialDate:(id)arg2 codeGenerationPeriod:(unsigned long long)arg3 numberOfDigits:(unsigned long long)arg4 algorithm:(unsigned long long)arg5;
- (id)initWithBase32EncodedKey:(id)arg1;
- (id)initWithBase32EncodedKey:(id)arg1 initialDate:(id)arg2 codeGenerationPeriod:(unsigned long long)arg3 numberOfDigits:(unsigned long long)arg4 algorithm:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithKeyData:(id)arg1 initialDate:(id)arg2 codeGenerationPeriod:(unsigned long long)arg3 numberOfDigits:(unsigned long long)arg4 algorithm:(unsigned long long)arg5 issuer:(id)arg6 accountName:(id)arg7 originalURL:(id)arg8;
- (id)initWithOTPAuthURL:(id)arg1;
- (id)initWithUserProvidedString:(id)arg1;
- (id)initialDate;
- (bool)isEqual:(id)arg1;
- (id)issuer;
- (unsigned long long)numberOfDigitsInCode;
- (id)originalURL;
- (void)setOriginalURL:(id)arg1;
- (id)startDateOfIntervalContainingDate:(id)arg1;

@end
