
@interface LanguageOptionResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithLanguageOptionToConfirm:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;
+ (id)disambiguationWithLanguageOptionsToDisambiguate:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)successWithResolvedLanguageOption:(id)arg1;
+ (id)successWithResolvedObject:(id)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
