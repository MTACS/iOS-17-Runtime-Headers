
@interface SSRelatedSearchesSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;

- (id)buildCardSections;
- (id)buildTitle;
- (bool)shouldSkipSection;
- (bool)useHorizontallyScrollingCardSectionUI;

@end
