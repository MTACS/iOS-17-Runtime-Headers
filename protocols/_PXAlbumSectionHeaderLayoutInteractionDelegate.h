
@protocol _PXAlbumSectionHeaderLayoutInteractionDelegate <NSObject>

@required

- (void)didTapSectionHeader:(_PXAlbumSectionHeaderLayout *)arg1;
- (void)sectionHeader:(_PXAlbumSectionHeaderLayout *)arg1 didToggleFiltersDisabled:(bool)arg2;
- (void)sectionHeader:(_PXAlbumSectionHeaderLayout *)arg1 didToggleSelectedState:(bool)arg2;

@end
