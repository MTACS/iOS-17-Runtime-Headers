
@interface CTPhoneNumber : NSObject <CTMessageAddress, NSCopying> {
    NSString * _countryCode;
    NSString * _digits;
    bool  _isShortCode;
    long long  _slot;
}

@property (readonly) NSString *countryCode;
@property (readonly) NSString *digits;
@property bool isShortCode;

+ (bool)isValidPhoneNumber:(id)arg1;
+ (bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3;

- (void).cxx_destruct;
- (id)canonicalFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)digits;
- (id)encodedString;
- (id)formatForCallingCountry:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3;
- (bool)isShortCode;
- (long long)numberOfDigitsForShortCodeNumber;
- (long long)numberOfDigitsForShortCodeNumber:(long long)arg1;
- (void)setIsShortCode:(bool)arg1;

@end
