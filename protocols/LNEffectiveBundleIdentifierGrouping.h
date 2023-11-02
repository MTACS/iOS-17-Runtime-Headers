
@protocol LNEffectiveBundleIdentifierGrouping <NSObject>

@required

- (NSOrderedSet *)effectiveBundleIdentifiers;
- (NSString *)mangledTypeName;
- (id)metadataByAddingEffectiveBundleIdentifiers:(NSOrderedSet *)arg1 mangledTypeName:(NSString *)arg2;

@end
