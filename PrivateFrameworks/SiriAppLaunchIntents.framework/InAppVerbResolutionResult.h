
@interface InAppVerbResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithInAppVerbToConfirm:(long long)arg1;
+ (id)successWithResolvedInAppVerb:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
