
@interface PLLibraryScopeTransactionResult : NSObject {
    NSArray * _assetObjectIDs;
    NSArray * _detectedFaceObjectIDs;
    NSPersistentHistoryToken * _lastProcessedCoreDataToken;
}

@property (readonly, copy) NSArray *assetObjectIDs;
@property (readonly, copy) NSArray *detectedFaceObjectIDs;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;

- (void).cxx_destruct;
- (id)assetObjectIDs;
- (id)detectedFaceObjectIDs;
- (id)initWithToken:(id)arg1 assetObjectIDs:(id)arg2 detectedFaceObjectIDs:(id)arg3;
- (id)lastProcessedCoreDataToken;

@end
