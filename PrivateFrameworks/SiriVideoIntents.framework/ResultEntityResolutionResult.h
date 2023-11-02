
@interface ResultEntityResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)confirmationRequiredWithResultEntityToConfirm:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)disambiguationWithResultEntitysToDisambiguate:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;
+ (id)successWithResolvedResultEntity:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
