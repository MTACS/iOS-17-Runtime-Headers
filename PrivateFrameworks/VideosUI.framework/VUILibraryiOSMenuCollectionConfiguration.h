
@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration {
    bool  _isDesignedForIpadEnabled;
    UICollectionViewCell * _menuItemSizingCell;
}

@property (nonatomic) bool isDesignedForIpadEnabled;
@property (nonatomic, retain) UICollectionViewCell *menuItemSizingCell;

- (void).cxx_destruct;
- (id)_layout;
- (Class)classForCollectionViewCell;
- (id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3;
- (id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2;
- (id)generateCollectionView;
- (id)init;
- (bool)isDesignedForIpadEnabled;
- (id)menuItemSizingCell;
- (double)minimumLineSpacing;
- (void)setIsDesignedForIpadEnabled:(bool)arg1;
- (void)setMenuItemSizingCell:(id)arg1;

@end
