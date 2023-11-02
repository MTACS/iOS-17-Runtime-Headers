
@interface EMDaemonInterface : NSObject <EFLoggable, EMRemoteProxyGenerator> {
    EMAccountRepository * _accountRepository;
    EMActivityRegistry * _activityRegistry;
    bool  _allowsBackgroundResume;
    EMBlockedSenderManager * _blockedSenderManager;
    EMClientState * _clientState;
    NSXPCConnection * _connection;
    long long  _connectionState;
    NSHashTable * _connections;
    <EFCancelable> * _daemonLaunchToken;
    EMDiagnosticInfoGatherer * _diagnosticInfoGatherer;
    EMDonationController * _donationController;
    EMFetchController * _fetchController;
    EMInteractionLogger * _interactionLogger;
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    EMMailboxRepository * _mailboxRepository;
    EMMessageRepository * _messageRepository;
    EMOutgoingMessageRepository * _outgoingMessageRepository;
    NSObject<OS_dispatch_queue> * _queue;
    EMSearchableIndex * _searchableIndex;
    EMSenderRepository * _senderRepository;
    <EMVIPManager> * _vipManager;
}

@property (readonly) EMAccountRepository *accountRepository;
@property (readonly) EMActivityRegistry *activityRegistry;
@property bool allowsBackgroundResume;
@property (readonly) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EMClientState *clientState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) EMDiagnosticInfoGatherer *diagnosticInfoGatherer;
@property (readonly) EMDonationController *donationController;
@property (readonly) EMFetchController *fetchController;
@property (readonly) unsigned long long hash;
@property (readonly) EMInteractionLogger *interactionLogger;
@property (readonly) EMMailboxRepository *mailboxRepository;
@property (readonly) EMMessageRepository *messageRepository;
@property (readonly) EMOutgoingMessageRepository *outgoingMessageRepository;
@property (readonly) <NSXPCProxyCreating> *proxyCreator;
@property (readonly) EMSearchableIndex *searchableIndex;
@property (readonly) EMSenderRepository *senderRepository;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *test_connection;
@property (readonly) <EMVIPManager> *vipManager;

+ (id)_mailUninstalledFile;
+ (bool)cachedMailAppIsInstalled;
+ (id)log;
+ (id)remoteObjectInterface;
+ (void)setCachedMailAppIsInstalled:(bool)arg1;

- (void).cxx_destruct;
- (id)_connectionForProtocol:(id)arg1 error:(id*)arg2;
- (id)_initByAdoptingConnection:(id)arg1 useNegotiatedConnection:(bool)arg2 configureBlockedSenderManager:(bool)arg3;
- (void)_invalidate;
- (id)accountRepository;
- (id)activityRegistry;
- (bool)allowsBackgroundResume;
- (id)blockedSenderManager;
- (id)clientState;
- (id)connectionForProtocol:(id)arg1;
- (void)dealloc;
- (id)diagnosticInfoGatherer;
- (id)donationController;
- (id)fetchController;
- (id)generateProxyForProtocol:(id)arg1 error:(id*)arg2;
- (void)handleDaemonAvailability;
- (id)init;
- (id)initAndConfigureBlockedSenderManager:(bool)arg1;
- (id)initForTesting;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)interactionLogger;
- (void)launchDaemon;
- (id)mailboxRepository;
- (id)messageRepository;
- (id)outgoingMessageRepository;
- (id)proxyCreator;
- (void)resetProtocolConnections;
- (id)searchableIndex;
- (id)senderRepository;
- (void)setAllowsBackgroundResume:(bool)arg1;
- (id)test_connection;
- (void)test_tearDown;
- (id)vipManager;

@end
