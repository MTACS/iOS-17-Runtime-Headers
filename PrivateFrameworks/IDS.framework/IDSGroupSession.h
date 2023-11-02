
@interface IDSGroupSession : NSObject {
    _IDSGroupSession * _internal;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic, readonly) NSSet *requiredCapabilities;
@property (nonatomic, readonly) NSSet *requiredLackOfCapabilities;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) NSString *sessionID;

+ (void)augmentConnectionGroupNetworkParameters:(id)arg1;
+ (id)augmentNetworkParametersForSession:(id)arg1 participantID:(unsigned long long)arg2 parameters:(id)arg3;
+ (id)augmentNetworkParametersForSessionAlias:(id)arg1 participantIDAlias:(unsigned long long)arg2 salt:(id)arg3 parameters:(id)arg4;
+ (id)createEndpointForSessionIDAlias:(id)arg1 topic:(id)arg2 participantIDAlias:(unsigned long long)arg3 salt:(id)arg4;
+ (id)createGroupDescriptorForSessionIDAlias:(id)arg1 topic:(id)arg2 salt:(id)arg3;
+ (id)keyValueDeliveryForSessionID:(id)arg1;
+ (void)requestNWConnectionWithDataBlob:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestNWConnectionforIDSGroupSessionBroadcastParameter:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_internal;
- (id)_internal_sessionWithValidityCheck;
- (id)broadcastParameterForService:(id)arg1;
- (unsigned long long)createAliasForLocalParticipantIDWithSalt:(id)arg1;
- (void)createAliasForLocalParticipantIDWithSalt:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2;
- (void)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createSessionIDAliasWithSalt:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)destination;
- (void)getParticipantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (void)invalidate;
- (void)joinWithOptions:(id)arg1;
- (id)keyValueDelivery;
- (void)leaveGroupSession;
- (void)leaveGroupSessionWithOptions:(id)arg1;
- (void)manageDesignatedMembers:(id)arg1 withType:(unsigned short)arg2;
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;
- (void)reconnectUPlusOneSession;
- (void)registerPluginWithOptions:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)requestActiveParticipants;
- (void)requestDataBlobForParticipantIDs:(id)arg1;
- (void)requestDataCryptorForTopic:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestEncryptionKeyForParticipants:(id)arg1;
- (void)requestURIsForParticipantIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requiredCapabilities;
- (id)requiredLackOfCapabilities;
- (unsigned int)sessionEndedReason;
- (id)sessionID;
- (id)sessionIDAliasWithSalt:(id)arg1;
- (void)setCallScreeningMode:(bool)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setParticipantInfo:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;
- (unsigned int)state;
- (id)unicastConnectorWithDataMode:(long long)arg1;
- (id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3;
- (id)unicastParameterForParticipantIDAlias:(unsigned long long)arg1 salt:(id)arg2 dataMode:(long long)arg3 connectionIndex:(unsigned long long)arg4;
- (void)unregisterPluginWithOptions:(id)arg1;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 messagingCapabilities:(id)arg3 triggeredLocally:(bool)arg4;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(bool)arg3;
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;
- (void)updateParticipantType:(unsigned short)arg1 members:(id)arg2 withContext:(id)arg3 triggeredLocally:(bool)arg4;

@end
