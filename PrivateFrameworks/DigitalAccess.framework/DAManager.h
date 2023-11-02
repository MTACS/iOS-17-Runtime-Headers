
@interface DAManager : NSObject {
    NSMutableSet * _activeSessions;
    NSXPCConnection * _clientConnection;
    NSString * _serviceName;
}

+ (id)createHomeKey:(id)arg1 seid:(id)arg2 readerIdentifier:(id)arg3 readerPublicKey:(id)arg4 outError:(id*)arg5;
+ (id)createHydraKey:(id)arg1 seid:(id)arg2 serverParameters:(id)arg3 outError:(id*)arg4;
+ (id)getHydraEncryptionCert:(id)arg1 session:(id)arg2 seid:(id)arg3 outError:(id*)arg4;
+ (void)handleSharingMessage:(id)arg1 forInvitationIdentifier:(id)arg2 fromMailboxIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)isCarKeySupportedForManufacturer:(id)arg1 brand:(id)arg2 ppid:(id)arg3 error:(id*)arg4;
+ (bool)isSupported;
+ (void)listKeysWithSession:(id)arg1 seid:(id)arg2 callback:(id /* block */)arg3;
+ (void)rejectSharingInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedManager;
+ (bool)updateHydraKey:(id)arg1 session:(id)arg2 seid:(id)arg3 encryptedSEData:(id)arg4 outError:(id*)arg5;

- (void).cxx_destruct;
- (id)connection;
- (id)createManagementSessionWithDelegate:(id)arg1;
- (id)createPairingSessionWithDelegate:(id)arg1;
- (id)createSharingSessionWithDelegate:(id)arg1;
- (id)init;
- (void)registerCrossPlatformTestMessageOverIDSHandler:(id /* block */)arg1;
- (void)registerCrossPlatformTestMessageSendHandler:(id /* block */)arg1;
- (void)registerFriendSideInvitationUnusableHandler:(id /* block */)arg1;
- (void)registerFriendSidePasscodeRetryRequestTestHandler:(id /* block */)arg1;
- (void)registerFriendSideSharingTestCompletion:(id /* block */)arg1;
- (void)registerFriendSideSharingTestInvitationUUIDHandler:(id /* block */)arg1;
- (void)registerOwnerSideInvitationRequestHandler:(id /* block */)arg1;
- (void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(id /* block */)arg2;
- (void)registerSession:(id)arg1;
- (void)sendCrossPlatformTestData:(id)arg1 toIdsIdentifier:(id)arg2;
- (void)unregisterSession:(id)arg1;
- (void)unregisterSharingTestHandlers;

@end
