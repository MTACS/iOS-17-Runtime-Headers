
@protocol TPPageLayoutInfoProvider <NSObject>

@required

- (TSDFill *)backgroundFillForPageIndex:(unsigned long long)arg1;
- (bool)canProvideInfoForPageIndex:(unsigned long long)arg1;
- (bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForCharIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForPageIndex:(unsigned long long)arg1;
- (<TSWPHeaderFooterProvider> *)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (TPPageController *)pageController;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (NSString *)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
- (TSPObject<TPSectionTemplateDrawableProvider> *)sectionTemplateDrawableProviderForPageIndex:(unsigned long long)arg1;
- (bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (bool)shouldUseFacingPagesForPageIndex:(unsigned long long)arg1;

@end
