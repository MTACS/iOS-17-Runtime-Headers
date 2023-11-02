
@interface CHSEquivalentBundleIdentifierResolver : NSObject <CHSEquivalentBundleIdentifierResolving> {
    void categoriesPrimitives;
}

+ (id)defaultResolver;

- (void).cxx_destruct;
- (id)equivalentBundleIdentifiersForBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithCategoriesPrimitives:(id)arg1;

@end
