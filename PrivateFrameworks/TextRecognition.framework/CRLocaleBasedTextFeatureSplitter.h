
@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter

- (id)_preferredLocaleFromScriptLocales:(id)arg1;
- (id)_topScriptCategoryBasedOnPreferredLocales:(id)arg1;
- (void)enumerateIndicesForLineRegions:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateLineRegions:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)preferredLocaleBasedScriptVoting:(id)arg1;
- (id)preferredLocales;

@end
