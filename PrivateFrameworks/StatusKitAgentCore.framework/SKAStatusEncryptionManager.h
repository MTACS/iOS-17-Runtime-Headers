
@interface SKAStatusEncryptionManager : NSObject <SKAStatusEncryptionManaging> {
    <SKADatabaseManaging> * _databaseManager;
    <SKAInvitationManaging> * _invitationManager;
}

@property (nonatomic, readonly) <SKADatabaseManaging> *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SKAInvitationManaging> *invitationManager;
@property (readonly) Class superclass;

+ (id)logger;

- (void).cxx_destruct;
- (id)_decryptPayload:(id)arg1 withRatchetIndex:(unsigned short)arg2 signatureData:(id)arg3 channel:(id)arg4;
- (id)_decryptPayloadData:(id)arg1 withIncomingRatchet:(id)arg2 withRatchetIndex:(unsigned short)arg3 signatureData:(id)arg4;
- (id)_deserializeBinaryPlistDictionaryData:(id)arg1;
- (id)_encryptPayload:(id)arg1 channel:(id)arg2;
- (id)_mostRecentIncomingRatchetForChannel:(id)arg1;
- (id)_serializeDictionaryAsBinaryPlist:(id)arg1;
- (id)databaseManager;
- (id)decryptStatusPayloadFromStatusEnvelopeData:(id)arg1 channel:(id)arg2;
- (id)encodeStatusPayload:(id)arg1 statusUniqueIdentifier:(id)arg2 dateCreated:(id)arg3 currentServerTime:(id)arg4 channel:(id)arg5;
- (id)encryptionValidationTokenForChannel:(id)arg1;
- (id)extractEnvelopeFromStatusEnvelopeData:(id)arg1;
- (id)initWithDatabaseManager:(id)arg1 invitationManager:(id)arg2;
- (id)invitationManager;

@end
