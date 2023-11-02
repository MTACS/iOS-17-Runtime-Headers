
@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate, RTIInputSystemSessionProtocol> {
    NSXPCConnection * _connection;
    RTIDocumentRequest * _defaultRequest;
    NSObject<OS_dispatch_queue> * _externalOperationsQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isPaused;
    long long  _lifecycleDispatchState;
    unsigned long long  _payloadVersion;
    NSMutableDictionary * _pendingRTISupplementalLexicons;
    NSMutableDictionary * _pendingSupplementalLexicons;
    NSMutableSet * _rtiSupplementalLexicons;
    NSMutableSet * _supplementalLexicons;
}

@property (nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly, copy) RTIDataPayload *currentDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) RTIDocumentRequest *defaultRequest;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool isPaused;
@property (nonatomic, readonly) unsigned long long payloadVersion;
@property (nonatomic, readonly) NSSet *rtiSupplementalLexicons;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *supplementalLexicons;

+ (id)sessionWithConnection:(id)arg1;

- (void).cxx_destruct;
- (void)_killConnectionWithCallback;
- (void)_queue_sessionWithID:(id)arg1 didAddRTISupplementalLexicon:(id)arg2;
- (void)_queue_sessionWithID:(id)arg1 didAddSupplementalLexicon:(id)arg2;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)arg1;
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 options:(id)arg2 documentTraits:(id)arg3 initialDocumentState:(id)arg4;
- (id)bundleIdentifier;
- (id)connection;
- (id)currentDataPayload;
- (void)dealloc;
- (id)defaultRequest;
- (void)didInitializeWithConnection:(id)arg1;
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1;
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1 options:(id)arg2;
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)flushOperations;
- (void)flushOperationsWithResultHandler:(id /* block */)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)internalQueue;
- (bool)isPaused;
- (unsigned long long)payloadVersion;
- (void)performDocumentRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)pid;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didAddRTISupplementalLexicon:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didAddSupplementalLexicon:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(bool)arg2 withReason:(id)arg3;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didRemoveRTISupplementalLexiconWithIdentifier:(unsigned long long)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 performInputOperation:(id)arg2;
- (void)remoteTextInputSessionWithID:(id)arg1 performInputOperation:(id)arg2 withResponse:(id /* block */)arg3;
- (oneway void)remoteTextInputSessionWithID:(id)arg1 textSuggestionsChanged:(id)arg2;
- (id)rtiSupplementalLexicons;
- (void)setConnection:(id)arg1;
- (void)setDefaultRequest:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setIsPaused:(bool)arg1;
- (id)supplementalLexicons;
- (id)valueForEntitlement:(id)arg1;

@end
