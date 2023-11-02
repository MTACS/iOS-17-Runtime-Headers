
@interface FPDActionOperation : FPOperation {
    NSMutableArray * _clientCompletions;
    NSMutableArray * _clients;
    NSMutableSet * _completedRoots;
    NSMutableDictionary * _createdItemByRoot;
    NSError * _error;
    NSMutableDictionary * _errorsByRoot;
    bool  _hasFinishedPreflight;
    FPActionOperationInfo * _info;
    unsigned long long  _logSection;
    FPDExtensionManager * _manager;
    NSProgress * _progress;
    NSMutableDictionary * _progressByRoot;
    NSMutableDictionary * _progressCompletionsByRoot;
    FPDRequest * _request;
}

@property (nonatomic, retain) NSMutableArray *clientCompletions;
@property (nonatomic, retain) NSMutableArray *clients;
@property (nonatomic, retain) NSMutableSet *completedRoots;
@property (nonatomic, retain) NSMutableDictionary *createdItemByRoot;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableDictionary *errorsByRoot;
@property (nonatomic) bool hasFinishedPreflight;
@property (nonatomic, readonly) FPActionOperationInfo *info;
@property (nonatomic) unsigned long long logSection;
@property (nonatomic, readonly) FPDExtensionManager *manager;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, retain) NSMutableDictionary *progressByRoot;
@property (nonatomic, retain) NSMutableDictionary *progressCompletionsByRoot;
@property (nonatomic, readonly) FPDRequest *request;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (id)clientCompletions;
- (id)clients;
- (id)completedRoots;
- (id)createdItemByRoot;
- (void)dumpStateTo:(id)arg1;
- (id)error;
- (id)errorsByRoot;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)forAllClients:(id /* block */)arg1;
- (bool)hasFinishedPreflight;
- (id)info;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (unsigned long long)logSection;
- (id)manager;
- (id)progress;
- (id)progressByRoot;
- (id)progressCompletionsByRoot;
- (id)progressForRoot:(id)arg1 completion:(id /* block */)arg2;
- (void)registerFrameworkClient:(id)arg1 operationCompletion:(id /* block */)arg2;
- (id)request;
- (void)sendPastUpdatesToClient:(id)arg1;
- (void)setClientCompletions:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setCompletedRoots:(id)arg1;
- (void)setCreatedItemByRoot:(id)arg1;
- (void)setError:(id)arg1;
- (void)setErrorsByRoot:(id)arg1;
- (void)setHasFinishedPreflight:(bool)arg1;
- (void)setLogSection:(unsigned long long)arg1;
- (void)setProgressByRoot:(id)arg1;
- (void)setProgressCompletionsByRoot:(id)arg1;
- (void)unregisterClientsAfterCompletion;

@end
