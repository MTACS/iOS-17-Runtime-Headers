
@interface SPFinderStateManager : NSObject <SPFinderStateManagement> {
    <SPFinderStateXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
    id /* block */  _stateChangedBlock;
    id /* block */  stateInfoChangedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPFinderStateXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, copy) id /* block */ stateChangedBlock;
@property (nonatomic, copy) id /* block */ stateInfoChangedBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)disableFinderModeWithCompletion:(id /* block */)arg1;
- (void)enableFinderModeWithCompletion:(id /* block */)arg1;
- (void)fetchFinderState:(id /* block */)arg1;
- (id)init;
- (id)proxy;
- (id)queue;
- (id)remoteInterface;
- (id)serviceDescription;
- (id)session;
- (void)setActiveCache:(long long)arg1 completion:(id /* block */)arg2;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStateChangedBlock:(id /* block */)arg1;
- (void)setStateInfoChangedBlock:(id /* block */)arg1;
- (void)start;
- (id /* block */)stateChangedBlock;
- (id /* block */)stateInfoChangedBlock;
- (void)stateInfoWithCompletion:(id /* block */)arg1;
- (void)updateStateBlock;

@end
