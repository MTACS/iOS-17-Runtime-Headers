
@interface VUILibraryGenresMenuCollectionConfiguration : VUICollectionConfiguration {
    VUILibraryMenuItemViewCell * _menuItemSizingCell;
}

@property (nonatomic, retain) VUILibraryMenuItemViewCell *menuItemSizingCell;

- (void).cxx_destruct;
- (Class)classForCollectionViewCell;
- (id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3;
- (id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2;
- (id)generateCollectionView;
- (id)menuItemSizingCell;
- (double)minimumLineSpacing;
- (void)setMenuItemSizingCell:(id)arg1;

@end
