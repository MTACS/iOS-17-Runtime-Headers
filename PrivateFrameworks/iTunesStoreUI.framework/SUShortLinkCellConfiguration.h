
@interface SUShortLinkCellConfiguration : SUMediaItemCellConfiguration

+ (id)copyDefaultContext;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)copyImageDataProvider;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (bool)showContentRating;

@end
