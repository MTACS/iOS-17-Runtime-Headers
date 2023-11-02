
@interface AppReferenceResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithAppReferenceToConfirm:(long long)arg1;
+ (id)successWithResolvedAppReference:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
