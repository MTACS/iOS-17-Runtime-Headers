
@interface VideosUI.RootSideBarController : UIViewController <UICollectionViewDelegate> {
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_profileView;
    void $__lazy_storage_$_toolbar;
    void delegate;
    void hasContentDisplayed;
    void layoutContentInsets;
}

- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)isLibraryOnlyCountryChanged:(id)arg1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
