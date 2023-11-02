
@interface SSPhotosSectionBuilder : SSSectionBuilder

+ (unsigned long long)maxVisibleColumnsInPhotosSection;
+ (id)supportedBundleIds;

- (id)buildCardSectionWithResult:(id)arg1 resultBuilder:(id)arg2;
- (id)buildCardSections;
- (id)buildCollectionStyle;
- (long long)maxCardSections;
- (bool)useHorizontallyScrollingCardSectionUI;

@end
