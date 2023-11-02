
@interface CXChannelServiceServer : NSObject <BSServiceConnectionListenerDelegate, CXChannelServiceClientDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    BSServiceConnection * _connection;
    CXChannelServiceDefinition * _definition;
    <CXChannelServiceServerDelegate> * _delegate;
    NSMutableDictionary * _identifierToClient;
    BSServiceConnectionListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    CXTransactionManager * _transactionManager;
    CXTransactionGroup * _uncommittedTransactionGroup;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly) NSArray *clients;
@property (nonatomic, readonly) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CXChannelServiceDefinition *definition;
@property (nonatomic) <CXChannelServiceServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *identifierToClient;
@property (nonatomic, readonly) BSServiceConnectionListener *listener;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CXTransactionManager *transactionManager;
@property (nonatomic, retain) CXTransactionGroup *uncommittedTransactionGroup;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)activate;
- (void)addAction:(id)arg1 toUncommittedTransactionForServiceClient:(id)arg2;
- (void)addClient:(id)arg1;
- (id)clientForIdentifier:(id)arg1;
- (id)clients;
- (void)commitUncommittedTransactions;
- (id)connection;
- (void)dealloc;
- (id)definition;
- (id)delegate;
- (void)failOutstandingActionsForChannelWithUUID:(id)arg1;
- (id)identifierToClient;
- (id)init;
- (void)invalidate;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)queue;
- (void)removeClient:(id)arg1;
- (void)serviceClient:(id)arg1 actionCompleted:(id)arg2;
- (void)serviceClient:(id)arg1 registeredWithConfiguration:(id)arg2;
- (void)serviceClient:(id)arg1 reportedAudioFinishedForChannelWithUUID:(id)arg2;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 connectedAtDate:(id)arg3;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 disconnectedAtDate:(id)arg3 disconnectedReason:(long long)arg4;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;
- (void)serviceClient:(id)arg1 reportedChannelWithUUID:(id)arg2 updated:(id)arg3;
- (void)serviceClient:(id)arg1 reportedIncomingTransmissionEndedForChannelWithUUID:(id)arg2 reason:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)serviceClient:(id)arg1 reportedIncomingTransmissionStartedForChannelWithUUID:(id)arg2 update:(id)arg3 shouldReplaceOutgoingTransmission:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)serviceClient:(id)arg1 requestedTransaction:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setUncommittedTransactionGroup:(id)arg1;
- (id)transactionManager;
- (id)uncommittedTransactionGroup;

@end
