
@interface TranslationResultItemResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)confirmationRequiredWithTranslationResultItemToConfirm:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)disambiguationWithTranslationResultItemsToDisambiguate:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;
+ (id)successWithResolvedTranslationResultItem:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
