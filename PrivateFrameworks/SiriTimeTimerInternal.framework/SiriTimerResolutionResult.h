
@interface SiriTimerResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)confirmationRequiredWithSiriTimerToConfirm:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)disambiguationWithSiriTimersToDisambiguate:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;
+ (id)successWithResolvedSiriTimer:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
