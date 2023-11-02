
@interface WFTextMatchResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithTextMatchToConfirm:(id)arg1;
+ (id)disambiguationWithTextMatchsToDisambiguate:(id)arg1;
+ (id)successWithResolvedTextMatch:(id)arg1;
+ (bool)supportsSecureCoding;

@end
