
@interface DDSTrialManager : NSObject <DDSTrialClientDelegate, DDSTrialManager> {
    <DDSTrialManagerDataSource> * _dataSource;
    <DDSTrialManagerDelegate> * _delegate;
    NSMutableDictionary * _trialClientByQuery;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <DDSTrialManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <DDSTrialManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *trialClientByQuery;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (void)fetchTrialAssetForQuery:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithWorkQueue:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUpTrialForQuery:(id)arg1;
- (void)trialClient:(id)arg1 didReceiveAsset:(id)arg2;
- (id)trialClientByQuery;
- (void)trialClientDidStop:(id)arg1;
- (id)workQueue;

@end
