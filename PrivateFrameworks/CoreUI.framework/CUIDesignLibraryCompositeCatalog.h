
@interface CUIDesignLibraryCompositeCatalog : NSObject {
    NSArray * _catalogs;
}

+ (id)_catalogsForDesignSystem:(long long)arg1 colorScheme:(long long)arg2 contrast:(long long)arg3 styling:(long long)arg4 error:(id*)arg5;
+ (id)compositeCatalogForDesignSystem:(long long)arg1 colorScheme:(long long)arg2 contrast:(long long)arg3 styling:(long long)arg4 error:(id*)arg5;

- (id)colorWithName:(long long)arg1 palette:(long long)arg2 displayGamut:(long long)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)initWithCatalogs:(id)arg1;
- (id)shapeEffectPresetWithName:(id)arg1 error:(id*)arg2;

@end
