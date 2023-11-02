
@interface SUTwoLineTrackCellConfiguration : SUMediaItemCellConfiguration

+ (id)copyDefaultContext;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (id)init;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end
