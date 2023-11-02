
@protocol MCMParametersSetDataProtection <MCMParametersWithContainer>

@required

- (int)dataProtectionClass;
- (bool)isThirdParty;
- (bool)retryIfLocked;

@end
