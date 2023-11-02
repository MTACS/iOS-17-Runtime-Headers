
@interface ActionParameterResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithActionParameterToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithActionParametersToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedActionParameter:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

@end
