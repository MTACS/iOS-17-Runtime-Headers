
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet * _mergedPolicies;
}

- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (void)addPolicy:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
