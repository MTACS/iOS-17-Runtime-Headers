
@interface InAppSearchCriteriaResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithInAppSearchCriteriaToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithInAppSearchCriteriasToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedInAppSearchCriteria:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
