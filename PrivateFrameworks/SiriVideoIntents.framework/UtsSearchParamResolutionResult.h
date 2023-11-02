
@interface UtsSearchParamResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)confirmationRequiredWithUtsSearchParamToConfirm:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)disambiguationWithUtsSearchParamsToDisambiguate:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;
+ (id)successWithResolvedUtsSearchParam:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
