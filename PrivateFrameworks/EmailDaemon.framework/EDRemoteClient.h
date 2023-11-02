
@interface EDRemoteClient : NSObject <EDReconciliationQueryProvider, EFLoggable, EMDaemonInterfaceXPC> {
    EDAccountRepository * _accountRepository;
    EDActivityRegistry * _activityRegistry;
    NSXPCConnection * _clientConnection;
    EDClientResumer * _clientResumer;
    EDClientState * _clientState;
    EDDaemonInterfaceFactory * _daemonInterfaceFactory;
    EDDiagnosticInfoGatherer * _diagnosticInfoGatherer;
    EDFetchController * _fetchController;
    EDInteractionLogger * _interactionLogger;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    EDMailboxRepository * _mailboxRepository;
    EDMessageRepository * _messageRepository;
    EDOutgoingMessageRepository * _outgoingMessageRepository;
    EDSearchableIndex * _searchableIndex;
    EDSenderRepository * _senderRepository;
    <EDServerRemoteClientsProvider> * _serverRemoteClientsProvider;
    <EMVIPManagerInterface> * _vipManagerInterface;
}

@property (nonatomic, readonly) EDAccountRepository *accountRepository;
@property (nonatomic, readonly) EDActivityRegistry *activityRegistry;
@property (nonatomic, readonly) NSXPCConnection *clientConnection;
@property (nonatomic, readonly) EDClientResumer *clientResumer;
@property (nonatomic, readonly) EDClientState *clientState;
@property (nonatomic, readonly) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EDDiagnosticInfoGatherer *diagnosticInfoGatherer;
@property (nonatomic, readonly) EDFetchController *fetchController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDInteractionLogger *interactionLogger;
@property (nonatomic, readonly) EDMailboxRepository *mailboxRepository;
@property (nonatomic, readonly) EDMessageRepository *messageRepository;
@property (nonatomic, readonly) EDOutgoingMessageRepository *outgoingMessageRepository;
@property (nonatomic, readonly) EDSearchableIndex *searchableIndex;
@property (nonatomic, readonly) EDSenderRepository *senderRepository;
@property (nonatomic, readonly) <EDServerRemoteClientsProvider> *serverRemoteClientsProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMVIPManagerInterface> *vipManagerInterface;

+ (id)exportedInterface;
+ (id)log;

- (void).cxx_destruct;
- (id)accountRepository;
- (id)activityRegistry;
- (id)clientConnection;
- (id)clientResumer;
- (id)clientState;
- (id)daemonInterfaceFactory;
- (void)dealloc;
- (id)diagnosticInfoGatherer;
- (id)fetchController;
- (void)getAccountRepositoryInterface:(id /* block */)arg1;
- (void)getActivityRegistryInterface:(id /* block */)arg1;
- (void)getClientStateInterface:(id /* block */)arg1;
- (void)getDiagnosticInfoGathererInterface:(id /* block */)arg1;
- (void)getFetchControllerInterface:(id /* block */)arg1;
- (void)getInteractionLoggerInterface:(id /* block */)arg1;
- (void)getMailboxRepositoryInterface:(id /* block */)arg1;
- (void)getMessageRepositoryInterface:(id /* block */)arg1;
- (void)getOutgoingMessageRepositoryInterface:(id /* block */)arg1;
- (void)getSearchableIndexInterface:(id /* block */)arg1;
- (void)getSenderRepositoryInterface:(id /* block */)arg1;
- (void)getVIPManagerInterface:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 daemonInterfaceFactory:(id)arg2 serverRemoteClientsProvider:(id)arg3;
- (id)interactionLogger;
- (void)launchForAppLaunch:(id /* block */)arg1;
- (void)launchForEarlyRecovery:(id /* block */)arg1;
- (id)mailboxRepository;
- (id)messageReconciliationQueries;
- (id)messageRepository;
- (id)outgoingMessageRepository;
- (id)searchableIndex;
- (id)senderRepository;
- (id)serverRemoteClientsProvider;
- (void)setAllowsBackgroundResume:(bool)arg1;
- (void)test_tearDown;
- (id)threadReconciliationQueries;
- (id)vipManagerInterface;

@end
