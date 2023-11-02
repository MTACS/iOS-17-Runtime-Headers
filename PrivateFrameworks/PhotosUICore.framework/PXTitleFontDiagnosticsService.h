
@interface PXTitleFontDiagnosticsService : PXDiagnosticsService

+ (id)_statisticsDescriptionForAssetCollections:(id)arg1 usingFontIndexBlock:(id /* block */)arg2;
+ (id)diagnosticsDescriptionForAssetCollections:(id)arg1;

- (bool)canProvideContextualViewController;
- (id)contextualViewController;
- (id)title;

@end
