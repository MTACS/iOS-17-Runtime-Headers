
@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (long long)albumDeletionWarningStyle;
- (id)albumViewControllerSpec;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;

@end
