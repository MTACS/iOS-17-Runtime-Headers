
@interface SharedLocationVisibilityResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSharedLocationVisibilityToConfirm:(long long)arg1;
+ (id)successWithResolvedSharedLocationVisibility:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
