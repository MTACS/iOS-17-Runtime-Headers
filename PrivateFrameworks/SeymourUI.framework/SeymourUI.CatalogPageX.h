
@interface SeymourUI.CatalogPageX : NSObject <UICollectionViewDataSourcePrefetching, UICollectionViewDelegate> {
    void collectionView;
    void dataSource;
    void delegate;
    void impressionsTracker;
    void layoutProvider;
    void shelves;
    void viewFactory;
}

- (void).cxx_destruct;
- (void)_collectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)init;

@end
