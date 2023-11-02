
@interface WFAskForInputResultResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithAskForInputResultToConfirm:(id)arg1;
+ (id)disambiguationWithAskForInputResultsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAskForInputResult:(id)arg1;
+ (bool)supportsSecureCoding;

@end
