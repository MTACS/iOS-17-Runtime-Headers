
@interface PKApplyVerificationPage : PKDynamicProvisioningPageContent {
    unsigned long long  _verificationCodeLength;
    unsigned long long  _verificationType;
}

@property (nonatomic, readonly) unsigned long long verificationCodeLength;
@property (nonatomic, readonly) unsigned long long verificationType;

- (id)initWithDictonary:(id)arg1;
- (unsigned long long)verificationCodeLength;
- (unsigned long long)verificationType;

@end
