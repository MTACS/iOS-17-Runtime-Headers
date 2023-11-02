
@protocol MKCollectionsFetcher <NSObject>

@required

- (void)getCollections:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getCollectionsUsingDataSource:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 6: UICollectionViewDiffableDataSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
