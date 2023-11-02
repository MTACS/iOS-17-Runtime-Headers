
@interface SignedDurationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)confirmationRequiredWithSignedDurationToConfirm:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)disambiguationWithSignedDurationsToDisambiguate:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;
+ (id)successWithResolvedSignedDuration:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
