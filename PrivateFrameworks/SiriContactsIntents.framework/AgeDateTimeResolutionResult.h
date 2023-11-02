
@interface AgeDateTimeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithAgeDateTimeToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithAgeDateTimesToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAgeDateTime:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
