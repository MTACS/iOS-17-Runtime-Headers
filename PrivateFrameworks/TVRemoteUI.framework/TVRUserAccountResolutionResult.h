
@interface TVRUserAccountResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithUserAccountToConfirm:(id)arg1;
+ (id)disambiguationWithUserAccountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedUserAccount:(id)arg1;
+ (bool)supportsSecureCoding;

@end
