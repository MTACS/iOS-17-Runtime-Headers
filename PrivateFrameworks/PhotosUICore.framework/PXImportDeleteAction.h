
@interface PXImportDeleteAction : PXImportConcurrentAction {
    NSArray * _assets;
    bool  _didSucceed;
    NSError * _error;
    PXImportController * _importController;
    NSProgress * _progress;
    NSMutableArray * _removedAssets;
    NSString * _sessionUuid;
}

@property (nonatomic) bool didSucceed;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) PXImportController *importController;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) NSString *sessionUuid;

+ (id)new;

- (void).cxx_destruct;
- (void)_handleDeletionFinished:(id)arg1;
- (void)_performMockAction;
- (void)_performRealAction;
- (void)_preAction;
- (void)_startObservingDeleteProgress;
- (void)_stopObservingDeleteProgress;
- (bool)canDeleteAssets;
- (void)cancel;
- (void)dealloc;
- (void)didRemoveAssets:(id)arg1;
- (bool)didSucceed;
- (id)error;
- (void)finish;
- (id)importController;
- (id)init;
- (id)initWithAssets:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)performAction;
- (id)progress;
- (void)sendActionProgress:(double)arg1;
- (id)sessionUuid;
- (void)setDidSucceed:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setImportController:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)start;

@end
