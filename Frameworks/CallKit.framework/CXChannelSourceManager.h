
@interface CXChannelSourceManager : NSObject <CXChannelServiceServerDelegate, CXTransactionManagerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    <CXChannelSourceManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableDictionary * _identifierToChannelSource;
    NSObject<OS_dispatch_queue> * _queue;
    CXChannelServiceServer * _serviceServer;
    CXTransactionManager * _transactionManager;
    CXTransactionGroup * _uncommittedTransactionGroup;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) NSArray *channelSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CXChannelSourceManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *identifierToChannelSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CXChannelServiceServer *serviceServer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CXTransactionManager *transactionManager;
@property (nonatomic, retain) CXTransactionGroup *uncommittedTransactionGroup;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addAction:(id)arg1 toUncommittedTransactionForChannelSource:(id)arg2;
- (void)addChannelSource:(id)arg1;
- (id)channelSourceForIdentifier:(id)arg1;
- (id)channelSources;
- (void)commitUncommittedTransactions;
- (id)delegate;
- (id)delegateQueue;
- (void)failOutstandingActionsForChannelWithUUID:(id)arg1;
- (id)identifierToChannelSource;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)performDelegateCallback:(id /* block */)arg1;
- (id)queue;
- (void)removeChannelSource:(id)arg1;
- (id)serviceServer;
- (void)serviceServer:(id)arg1 client:(id)arg2 actionCompleted:(id)arg3;
- (void)serviceServer:(id)arg1 client:(id)arg2 registeredWithConfiguration:(id)arg3;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedAudioFinishedForChannelWithUUID:(id)arg3;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedChannelWithUUID:(id)arg3 connectedAtDate:(id)arg4;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedChannelWithUUID:(id)arg3 disconnectedAtDate:(id)arg4 disconnectedReason:(long long)arg5;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedChannelWithUUID:(id)arg3 startedConnectingAtDate:(id)arg4;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedChannelWithUUID:(id)arg3 updated:(id)arg4;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedIncomingTransmissionEndedForChannelWithUUID:(id)arg3 reason:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)serviceServer:(id)arg1 client:(id)arg2 reportedIncomingTransmissionStartedForChannelWithUUID:(id)arg3 update:(id)arg4 shouldReplaceOutgoingTransmission:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)serviceServer:(id)arg1 client:(id)arg2 requestedTransaction:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)serviceServer:(id)arg1 didAddClient:(id)arg2;
- (void)serviceServer:(id)arg1 didRemoveClient:(id)arg2;
- (void)setUncommittedTransactionGroup:(id)arg1;
- (id)transactionManager;
- (void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3;
- (void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2;
- (id)uncommittedTransactionGroup;

@end
