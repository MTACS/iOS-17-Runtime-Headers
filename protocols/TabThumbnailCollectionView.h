
@protocol TabThumbnailCollectionView <TabCollectionView, TabSnapshotSizing>

@required

- (void)beginSearching;
- (bool)defersActivation;
- (<TabThumbnailCollectionViewDelegate> *)delegate;
- (void)dismissAnimated:(bool)arg1;
- (void)endSearching;
- (void)enumerateItemsOrderedByVisibility:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (bool)isSearching;
- (<TabCollectionItem> *)itemToActivate;
- (NSArray *)itemsFullyInView;
- (NSArray *)itemsMatchingSearchTerm;
- (void)presentAnimated:(bool)arg1;
- (long long)presentationState;
- (NSString *)searchTerm;
- (void)setDefersActivation:(bool)arg1;
- (void)setDelegate:(id <TabThumbnailCollectionViewDelegate>)arg1;
- (void)setItemToActivate:(id <TabCollectionItem>)arg1;
- (void)setSearchTerm:(NSString *)arg1;
- (TabOverviewToolbar *)toolbar;

@optional

- (void)addPresentationObserver:(id <TabThumbnailCollectionViewPresentationObserving>)arg1;
- (void)removePresentationObserver:(id <TabThumbnailCollectionViewPresentationObserving>)arg1;

@end
