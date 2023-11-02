
@interface PSKeychainSyncPhoneNumber : NSObject {
    KeychainSyncCountryInfo * _countryInfo;
    NSString * _digits;
}

@property (nonatomic, retain) KeychainSyncCountryInfo *countryInfo;
@property (nonatomic, retain) NSString *digits;

+ (id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2;

- (void).cxx_destruct;
- (id)_stringByAddingDialingPrefixToString:(id)arg1;
- (id)countryInfo;
- (id)digits;
- (id)formattedAndObfuscatedString;
- (id)formattedString;
- (id)formattedStringWithDialingPrefix;
- (void)setCountryInfo:(id)arg1;
- (void)setDigits:(id)arg1;

@end
