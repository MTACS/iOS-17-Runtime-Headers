
@interface PKPaymentSetupFieldBuiltInPrimaryAccountNumber : PKPaymentSetupFieldText

- (id)compactLocalizedDisplayName;
- (id)displayFormatPaddingCharacters;
- (bool)hasDisplayFormat;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isBuiltIn;
- (id)stringByApplyingDisplayFormat:(id)arg1;

@end
