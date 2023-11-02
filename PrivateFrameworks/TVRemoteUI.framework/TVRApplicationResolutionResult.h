
@interface TVRApplicationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithApplicationToConfirm:(id)arg1;
+ (id)disambiguationWithApplicationsToDisambiguate:(id)arg1;
+ (id)successWithResolvedApplication:(id)arg1;
+ (bool)supportsSecureCoding;

@end
