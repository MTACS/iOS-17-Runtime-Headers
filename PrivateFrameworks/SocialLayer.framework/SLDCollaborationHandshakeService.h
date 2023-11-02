
@interface SLDCollaborationHandshakeService : NSObject <SLDCollaborationHandshakeService, SLDService> {
    SLSWActionDispatcher * _actionDispatcher;
    SLPersonIdentityGenerator * _personIdentityGenerator;
    NSObject<OS_dispatch_queue> * _privateSerialQueue;
    SLDProcessVerifier * _processVerifier;
    SLDTaskManager * _taskManager;
}

@property (nonatomic, retain) SLSWActionDispatcher *actionDispatcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SLPersonIdentityGenerator *personIdentityGenerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (nonatomic, retain) SLDProcessVerifier *processVerifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) SLDTaskManager *taskManager;

+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)arg1;
+ (id)sharedService;

- (void).cxx_destruct;
- (unsigned long long)_acquireSandboxHandleData:(id)arg1 ForFileProviderDocumentURL:(id)arg2 clientConnection:(id)arg3 error:(id*)arg4;
- (bool)_connection:(id)arg1 hasPermissionForFileURL:(id)arg2;
- (bool)_doesMetadata:(id)arg1 containAllOf:(id)arg2;
- (bool)_doesMetadata:(id)arg1 containAnyOf:(id)arg2;
- (bool)_fileURLHasFileProvider:(id)arg1 error:(id*)arg2;
- (void)_localPersonIdentityForDocumentIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_personIdentitiesForHandles:(id)arg1 documentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)_releaseSandboxHandle:(unsigned long long)arg1;
- (id)_removeIdentities:(id)arg1 fromMetadata:(id)arg2;
- (void)_sendActionUpdateParticipantsWithFileURL:(id)arg1 metadata:(id)arg2 addedIdentities:(id)arg3 removedIdentities:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendActionUpdateParticipantsWithMetadata:(id)arg1 addedIdentities:(id)arg2 removedIdentities:(id)arg3 completion:(id /* block */)arg4;
- (id)_updateMetadata:(id)arg1 withNewIdentities:(id)arg2;
- (id)actionDispatcher;
- (id)addParticipantHandles:(id)arg1 withFileURL:(id)arg2 sandboxTokenData:(id)arg3 metadata:(id)arg4 reply:(id /* block */)arg5;
- (id)addParticipantHandles:(id)arg1 withMetadata:(id)arg2 reply:(id /* block */)arg3;
- (bool)allowsConnection:(id)arg1;
- (id)generateProofForIdentity:(id)arg1 collaborationIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)personIdentityGenerator;
- (void)prepareConnectionWithReply:(id /* block */)arg1;
- (id)privateSerialQueue;
- (id)processVerifier;
- (id)removeParticipantIdentities:(id)arg1 withFileURL:(id)arg2 sandboxTokenData:(id)arg3 metadata:(id)arg4 reply:(id /* block */)arg5;
- (id)removeParticipantIdentities:(id)arg1 withMetadata:(id)arg2 reply:(id /* block */)arg3;
- (void)setActionDispatcher:(id)arg1;
- (void)setProcessVerifier:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (id)startCollaborationWithFileURL:(id)arg1 sandboxTokenData:(id)arg2 metadata:(id)arg3 participants:(id)arg4 reply:(id /* block */)arg5;
- (id)startCollaborationWithMetadata:(id)arg1 participants:(id)arg2 reply:(id /* block */)arg3;
- (id)taskManager;
- (id)verifySourceBundleIdentifierFromMetadata:(id)arg1 reply:(id /* block */)arg2;

@end
