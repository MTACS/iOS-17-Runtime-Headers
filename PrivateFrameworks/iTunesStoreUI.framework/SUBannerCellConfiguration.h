
@interface SUBannerCellConfiguration : SUItemCellConfiguration

+ (id)copyDefaultContext;
+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (struct CGSize { double x1; double x2; })_imageSizeForLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyImageDataProvider;
- (id)init;
- (void)reloadAfterArtworkLoad;
- (void)reloadData;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end
