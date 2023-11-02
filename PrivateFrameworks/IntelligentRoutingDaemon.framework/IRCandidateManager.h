
@interface IRCandidateManager : NSObject <IRAVOutputDeviceProviderObserverProtocol, IRDeallocSync, IRPersistenceSynchronizable, IRRapportProviderObserverProtocol> {
    IRAVOutputDeviceProvider * _avOutputDeviceProvider;
    NSSet * _avodDevices;
    IRCandidatesContainerDO * _candidatesContainer;
    <IRPolicyManagerContextObserver> * _contextObserver;
    NSObject<OS_dispatch_queue> * _queue;
    IRRapportProvider * _rapportDeviceProvider;
    NSSet * _rapportDevices;
    IRServiceStore * _store;
}

@property (nonatomic, retain) IRAVOutputDeviceProvider *avOutputDeviceProvider;
@property (nonatomic, retain) NSSet *avodDevices;
@property (nonatomic, retain) IRCandidatesContainerDO *candidatesContainer;
@property (nonatomic) <IRPolicyManagerContextObserver> *contextObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IRRapportProvider *rapportDeviceProvider;
@property (nonatomic, retain) NSSet *rapportDevices;
@property (nonatomic, retain) IRServiceStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCandidates:(id)arg1;
- (void)_deleteCandidates:(id)arg1;
- (void)_didUpdateContextWithReason:(id)arg1;
- (void)_handleCandidatesCleanup;
- (id)_lastUsedDateForCandidate:(id)arg1 fromHistoryEventsContainer:(id)arg2;
- (id)_nodesForCandidate:(id)arg1 fromExistingCandidate:(id)arg2;
- (id)_oldestCandidatesFrom:(id)arg1 forKey:(id)arg2 limit:(unsigned long long)arg3;
- (void)_updateCandidate:(id)arg1;
- (id)avOutputDeviceProvider;
- (id)avodDevices;
- (id)candidateForCandidateIdentifier:(id)arg1;
- (id)candidatesContainer;
- (id)contextObserver;
- (void)dealloc;
- (void)deallocSync;
- (void)deleteCandidate:(id)arg1;
- (id)initWithQueue:(id)arg1 contextObserver:(id)arg2 avOutputDeviceProvider:(id)arg3 rapportDeviceProvider:(id)arg4 store:(id)arg5;
- (void)notifyAddEventForCandidateIdentifier:(id)arg1;
- (void)provider:(id)arg1 didUpdateAVOutputDevices:(id)arg2;
- (void)provider:(id)arg1 didUpdateRapportDevices:(id)arg2;
- (id)queue;
- (id)rapportDeviceProvider;
- (id)rapportDevices;
- (void)setAvOutputDeviceProvider:(id)arg1;
- (void)setAvodDevices:(id)arg1;
- (void)setCandidatesContainer:(id)arg1;
- (void)setContextObserver:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRapportDeviceProvider:(id)arg1;
- (void)setRapportDevices:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)synchronizeAndFetchFromDBOnDisk;
- (void)updateCandidates:(id)arg1 withHistoryEventsContainer:(id)arg2;

@end
