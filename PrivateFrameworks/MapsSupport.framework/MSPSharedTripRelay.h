
@interface MSPSharedTripRelay : NSObject <IDSServiceDelegate> {
    <MSPSharedTripAvailabiltyDelegate> * _availabilityDelegate;
    NSString * _clientID;
    <MSPSharedTripRelayDelegate> * _delegate;
    NSString * _displayName;
    NSMutableDictionary * _packetBuckets;
    NSMutableDictionary * _sharedTripGroupIDSSessions;
    MSPSharedTripGroupSession * _sharingETAGroupSession;
    IDSService * _sharingService;
    MSPSharedTripStorageController * _storageController;
}

@property (nonatomic, readonly) NSArray *accountAliases;
@property (nonatomic) <MSPSharedTripAvailabiltyDelegate> *availabilityDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPSharedTripRelayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValidIDSAccount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sharingHandle;
@property (nonatomic, readonly) MSPSharedTripSharingIdentity *sharingIdentity;
@property (nonatomic, readonly) NSString *sharingName;
@property (nonatomic, retain) MSPSharedTripStorageController *storageController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchDisplayName;
- (void)_handleChunk:(id)arg1 fromID:(id)arg2 receivingHandle:(id)arg3 receivingAccountIdentifier:(id)arg4;
- (void)_handleCommand:(id)arg1 fromID:(id)arg2;
- (void)_handleIncomingMessage:(id)arg1 info:(id)arg2 fromID:(id)arg3 receivingHandle:(id)arg4 receivingAccountIdentifier:(id)arg5;
- (void)_removeFinishedSession:(id)arg1;
- (void)_startService;
- (id)accountAliases;
- (id)availabilityDelegate;
- (void)dealloc;
- (id)delegate;
- (id)groupSessionForIdentifier:(id)arg1;
- (bool)hasValidIDSAccount;
- (id)init;
- (id)removeSharingWith:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 fromID:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)setAvailabilityDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStorageController:(id)arg1;
- (id)sharingHandle;
- (id)sharingIdentity;
- (id)sharingName;
- (id)startSharingGroupSessionWithTripIdentifer:(id)arg1;
- (void)stopSharing;
- (id)storageController;

@end
