
@interface FPDExtensionSession : NSObject <FPDExtensionSessionProtocol, FPDProcessMonitorDelegate> {
    RBSAssertion * _backgroundAssertion;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSXPCConnection * _connection;
    FPDDomain * _domain;
    NSExtension * _extension;
    RBSAssertion * _foregroundAssertion;
    FPDExtension * _fpdExtension;
    FPGracePeriodTimer * _gracePeriodTimer;
    bool  _hasFileProviderPresenceTCCAccess;
    NSMutableDictionary * _inflightProxies;
    bool  _invalidated;
    bool  _isForeground;
    NSMapTable * _lifetimeExtenders;
    NSObject<OS_os_log> * _log;
    FPGracePeriodTimer * _networkingGracePeriodTimer;
    int  _notifyTokenForFramework;
    NSCountedSet * _observingBundleIDs;
    int  _pid;
    FPDProcessMonitor * _processMonitor;
    NSString * _providerIdentifier;
    NSUUID * _requestIdentifier;
    _EXExtensionProcess * _sessionProcess;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    NSUUID * _sessionUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasFileProviderAttributionMDMAccess;
@property (nonatomic) bool hasFileProviderPresenceTCCAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__invalidate;
- (id)_alternateContentsDictionary;
- (id)_connectionWithError:(id*)arg1;
- (void)_evaluateExtensionForegroundness;
- (void)_invalidate;
- (void)_invalidateExtensionIfPossible;
- (void)_networkingGracePeriodOver;
- (void)_notifyNetworkingProviderMonitorWithState:(bool)arg1;
- (bool)_setUpConnectionWithError:(id*)arg1;
- (bool)_setUpEXConnectionWithError:(id*)arg1;
- (bool)_setUpPKConnectionWithError:(id*)arg1;
- (void)_unregisterLifetimeExtensionForObject:(id)arg1;
- (void)assertionWasInvalidated:(id)arg1;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)cancelAsync;
- (void)dealloc;
- (id)description;
- (void)dumpStateTo:(id)arg1;
- (id)existingFileProviderProxyWithTimeout:(double)arg1 onlyAlreadyLifetimeExtended:(bool)arg2 pid:(int)arg3;
- (bool)hasFileProviderAttributionMDMAccess;
- (bool)hasFileProviderPresenceTCCAccess;
- (id)initWithDomain:(id)arg1 extension:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (id)newAssertionWithAttributeName:(id)arg1 reason:(id)arg2;
- (id)newBackgroundAssertion;
- (id)newFileProviderProxyWithTimeout:(double)arg1 pid:(int)arg2;
- (id)newFileProviderProxyWithTimeoutValue:(double)arg1 pid:(int)arg2 createIfNeeded:(bool)arg3;
- (id)newForegroundAssertion;
- (void)processMonitor:(id)arg1 didBecomeForeground:(bool)arg2;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)setHasFileProviderPresenceTCCAccess:(bool)arg1;
- (void)start;
- (bool)terminateExtensionWithReason:(id)arg1 error:(id*)arg2;
- (void)terminateWithReason:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
