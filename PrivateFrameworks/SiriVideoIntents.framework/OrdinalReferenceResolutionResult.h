
@interface OrdinalReferenceResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithOrdinalReferenceToConfirm:(long long)arg1;
+ (id)successWithResolvedOrdinalReference:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
