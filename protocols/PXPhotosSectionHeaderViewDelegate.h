
@protocol PXPhotosSectionHeaderViewDelegate <NSObject>

@optional

- (void)didTapHeaderView:(PXPhotosSectionHeaderView *)arg1;
- (void)headerView:(PXPhotosSectionHeaderView *)arg1 actionButtonPressed:(id)arg2;
- (void)textSizeDidChangeForHeaderView:(PXPhotosSectionHeaderView *)arg1;

@end
