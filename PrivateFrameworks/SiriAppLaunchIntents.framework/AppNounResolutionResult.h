
@interface AppNounResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAppNounToConfirm:(long long)arg1;
+ (id)successWithResolvedAppNoun:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
