
@interface SSLinksSectionBuilder : SSSectionBuilder

+ (id)supportedBundleId;

- (id)buildCardSectionWithResult:(id)arg1 resultBuilder:(id)arg2;
- (id)buildCollectionStyle;
- (long long)maxCardSections;
- (bool)useCompactRowOnMac;
- (bool)useHorizontallyScrollingCardSectionUI;

@end
