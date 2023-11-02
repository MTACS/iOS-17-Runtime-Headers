
@interface MPCModelStorePlaybackItemsRequestAccumulatorImportResponse : NSObject {
    struct MPCModelStorePlaybackItemsRequestAccumulatorResult { 
        bool didFinishEntireRequest; 
        bool didFinishPrioritizedBatch; 
        bool hasCollectionItemsWithPlaybackAuthorizationToken; 
        bool hasPrioritizedItemsToLoad; 
    }  _accumulatorImportResult;
    MPServerObjectDatabaseImportResult * _serverObjectDatabaseImportResult;
}

@property (nonatomic, readonly) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; } accumulatorImportResult;
@property (nonatomic, readonly, copy) MPServerObjectDatabaseImportResult *serverObjectDatabaseImportResult;

- (void).cxx_destruct;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; })accumulatorImportResult;
- (id)initWitDatabaseImportResult:(id)arg1 accumulatorImportResult:(struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; bool x3; bool x4; })arg2;
- (id)serverObjectDatabaseImportResult;

@end
