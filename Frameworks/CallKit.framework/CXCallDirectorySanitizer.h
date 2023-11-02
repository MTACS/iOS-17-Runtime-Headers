
@interface CXCallDirectorySanitizer : NSObject {
    NSCharacterSet * _nonPhoneNumbersCharacterSet;
    NSCharacterSet * _phoneNumbersCharacterSet;
    NSCharacterSet * _phoneNumbersIgnoredCharacterSet;
}

@property (nonatomic, readonly) NSCharacterSet *nonPhoneNumbersCharacterSet;
@property (nonatomic, readonly) NSCharacterSet *phoneNumbersCharacterSet;
@property (nonatomic, readonly) NSCharacterSet *phoneNumbersIgnoredCharacterSet;

- (void).cxx_destruct;
- (id)canonicalizedPhoneNumber:(id)arg1;
- (id)init;
- (id)nonPhoneNumbersCharacterSet;
- (id)phoneNumbersCharacterSet;
- (id)phoneNumbersIgnoredCharacterSet;

@end
