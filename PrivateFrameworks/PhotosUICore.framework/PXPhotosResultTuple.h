
@interface PXPhotosResultTuple : NSObject {
    PHFetchResult * _curatedFetchResult;
    id /* block */  _curatedRefetchCondition;
    PHFetchResult * _fetchResult;
    bool  _fetchedWithReverseSortOrder;
    NSPredicate * _filterPredicate;
    PHFetchResult * _keyAssetsFetchResult;
}

@property (nonatomic, readonly) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) id /* block */ curatedRefetchCondition;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) bool fetchedWithReverseSortOrder;
@property (nonatomic, readonly) NSPredicate *filterPredicate;
@property (nonatomic, readonly) PHFetchResult *keyAssetsFetchResult;

- (void).cxx_destruct;
- (id)curatedFetchResult;
- (id /* block */)curatedRefetchCondition;
- (id)description;
- (id)fetchResult;
- (bool)fetchedWithReverseSortOrder;
- (id)filterPredicate;
- (id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(bool)arg2 curatedFetchResult:(id)arg3 curatedRefetchCondition:(id /* block */)arg4 keyAssetsFetchResult:(id)arg5 filterPredicate:(id)arg6;
- (id)keyAssetsFetchResult;
- (id)resultTupleUpdatedWithChange:(id)arg1;

@end
