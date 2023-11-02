
@interface PUPhotosPanoramaViewControllerSpec : PULegacyViewControllerSpec

+ (id)padSpec;
+ (id)phoneSpec;

- (struct CGSize { double x1; double x2; })_itemSizeForWidth:(double)arg1;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 referenceWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (unsigned short)fastThumbnailImageFormat;
- (double)globalFooterHeight;
- (id)gridSpec;
- (double)sectionHeaderHeight;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned short)thumbnailImageFormat;

@end
