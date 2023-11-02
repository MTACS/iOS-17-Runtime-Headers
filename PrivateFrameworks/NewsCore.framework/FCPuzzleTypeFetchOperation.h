
@interface FCPuzzleTypeFetchOperation : FCMultiStepFetchOperation {
    FCAssetManager * _assetManager;
    <FCContentContext> * _context;
    <FCPuzzleTypeFetchOperationDelegate> * _delegate;
    FCHeldRecords * _heldPuzzleTypeRecords;
    bool  _overrideTargetsCachePolicy;
    NSArray * _puzzleTypeIDs;
    FCPuzzleTypeRecordSource * _puzzleTypeRecordSource;
    unsigned long long  _targetsCachePolicy;
    double  _targetsMaximumCachedAge;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic) <FCPuzzleTypeFetchOperationDelegate> *delegate;
@property (nonatomic, retain) FCHeldRecords *heldPuzzleTypeRecords;
@property bool overrideTargetsCachePolicy;
@property (nonatomic, retain) NSArray *puzzleTypeIDs;
@property (nonatomic, retain) FCPuzzleTypeRecordSource *puzzleTypeRecordSource;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;

- (void).cxx_destruct;
- (id)assetManager;
- (id)completeFetchOperation;
- (id)context;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)delegate;
- (id)fetchPuzzleTypeRecordsWithCompletion:(id /* block */)arg1;
- (id)heldPuzzleTypeRecords;
- (id)init;
- (id)initWithPuzzleTypeIDs:(id)arg1 puzzleTypeRecordSource:(id)arg2 assetManager:(id)arg3 context:(id)arg4 delegate:(id)arg5;
- (bool)overrideTargetsCachePolicy;
- (id)puzzleTypeIDs;
- (id)puzzleTypeRecordSource;
- (void)setAssetManager:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeldPuzzleTypeRecords:(id)arg1;
- (void)setOverrideTargetsCachePolicy:(bool)arg1;
- (void)setPuzzleTypeIDs:(id)arg1;
- (void)setPuzzleTypeRecordSource:(id)arg1;
- (void)setTargetsCachePolicy:(unsigned long long)arg1;
- (void)setTargetsMaximumCachedAge:(double)arg1;
- (unsigned long long)targetsCachePolicy;
- (double)targetsMaximumCachedAge;

@end
