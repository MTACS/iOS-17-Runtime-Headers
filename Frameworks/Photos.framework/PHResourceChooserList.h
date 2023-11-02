
@interface PHResourceChooserList : NSObject {
    <PHResourceChooserAsset> * _asset;
    NSManagedObjectContext * _context;
    bool  _didObserveThumbnailStoreKey;
    id /* block */  _endOfListHandler;
    unsigned long long  _enumerationDirection;
    bool  _finishedPresentingFromFetchedResources;
    bool  _finishedPresentingFromHints;
    long long  _hintDataCurrentOffset;
    long long  _hintDataNextItemOffset;
    id /* block */  _itemHandler;
    unsigned long long  _lastPresentedFullResourceIndex;
    NSArray * _nonHintResources;
    NSSortDescriptor * _sortDescriptor;
    NSArray * _unvisitedNonHintResources;
    NSMutableArray * _visitedKeys;
}

- (void).cxx_destruct;
- (void)continueEnumeratingWithSourceOptions:(unsigned long long)arg1;
- (id)init;
- (void)moveFirst;
- (bool)reversed;

@end
