
@interface FCPuzzleFetchOperation : FCMultiStepFetchOperation {
    FCAssetManager * _assetManager;
    <FCCoreConfiguration> * _configuration;
    <FCCoreConfigurationManager> * _configurationManager;
    <FCPuzzleFetchOperationDelegate> * _delegate;
    NSDictionary * _fetchedPuzzleTypes;
    FCHeldRecords * _heldPuzzleRecords;
    bool  _overrideTargetsCachePolicy;
    NSArray * _puzzleIDs;
    FCPuzzleRecordSource * _puzzleRecordSource;
    FCPuzzleTypeController * _puzzleTypeController;
    unsigned long long  _targetsCachePolicy;
    double  _targetsMaximumCachedAge;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic) <FCPuzzleFetchOperationDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *fetchedPuzzleTypes;
@property (nonatomic, retain) FCHeldRecords *heldPuzzleRecords;
@property bool overrideTargetsCachePolicy;
@property (nonatomic, retain) NSArray *puzzleIDs;
@property (nonatomic, retain) FCPuzzleRecordSource *puzzleRecordSource;
@property (nonatomic, retain) FCPuzzleTypeController *puzzleTypeController;
@property unsigned long long targetsCachePolicy;
@property double targetsMaximumCachedAge;

- (void).cxx_destruct;
- (id)assetManager;
- (id)completeFetchOperation;
- (id)configuration;
- (id)configurationManager;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)delegate;
- (id)determineAppropriateFetchStepsWithCompletion:(id /* block */)arg1;
- (id)fetchConfigWithCompletion:(id /* block */)arg1;
- (id)fetchPuzzleRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchedPuzzleTypes;
- (id)heldPuzzleRecords;
- (id)init;
- (id)initWithPuzzleIDs:(id)arg1 puzzleTypeController:(id)arg2 puzzleRecordSource:(id)arg3 assetManager:(id)arg4 configurationManager:(id)arg5 delegate:(id)arg6;
- (bool)overrideTargetsCachePolicy;
- (id)puzzleIDs;
- (id)puzzleRecordSource;
- (id)puzzleTypeController;
- (void)setAssetManager:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchedPuzzleTypes:(id)arg1;
- (void)setHeldPuzzleRecords:(id)arg1;
- (void)setOverrideTargetsCachePolicy:(bool)arg1;
- (void)setPuzzleIDs:(id)arg1;
- (void)setPuzzleRecordSource:(id)arg1;
- (void)setPuzzleTypeController:(id)arg1;
- (void)setTargetsCachePolicy:(unsigned long long)arg1;
- (void)setTargetsMaximumCachedAge:(double)arg1;
- (unsigned long long)targetsCachePolicy;
- (double)targetsMaximumCachedAge;

@end
