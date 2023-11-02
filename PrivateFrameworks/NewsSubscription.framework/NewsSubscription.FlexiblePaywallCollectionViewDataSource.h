
@interface NewsSubscription.FlexiblePaywallCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    void delegate;
    void feedItemRenderer;
    void feedItemSupplementaryRenderer;
    void layoutProvider;
    void subscribeButtonDebouncer;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)init;

@end
