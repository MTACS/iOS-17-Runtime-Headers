
@protocol MKFHomeManager <MKFModel, MKFHomeManagerPublicExtensions>

@required

- (NSArray *)accounts;
- (NSDictionary *)appDataDictionary;
- (NSNumber *)assistantSyncDataPosted;
- (NSString *)controllerKeyIdentifier;
- (MKFHomeManagerDatabaseID *)databaseID;
- (<MKFAccount> *)findAccountsRelationWithModelID:(NSUUID *)arg1;
- (<MKFHomeManagerHome> *)findHomesRelationWithModelID:(NSUUID *)arg1;
- (<MKFIncomingInvitation> *)findIncomingInvitationsRelationWithModelID:(NSUUID *)arg1;
- (NSArray *)homes;
- (NSArray *)incomingInvitations;
- (<MKFAccount> *)materializeOrCreateAccountsRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFHomeManagerHome> *)materializeOrCreateHomesRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFIncomingInvitation> *)materializeOrCreateIncomingInvitationsRelationWithModelID:(NSUUID *)arg1 createdNew:(bool*)arg2;
- (<MKFHAPMetadata> *)materializeOrCreateMetadataRelation:(bool*)arg1;
- (<MKFHAPMetadata> *)metadata;
- (NSArray *)pairingAppleAccessories;
- (<MKFHomeManagerHome> *)primaryHome;
- (void)setAppDataDictionary:(NSDictionary *)arg1;
- (void)setAssistantSyncDataPosted:(NSNumber *)arg1;
- (void)setControllerKeyIdentifier:(NSString *)arg1;
- (void)setMetadata:(id <MKFHAPMetadata>)arg1;
- (void)setPairingAppleAccessories:(NSArray *)arg1;
- (void)setPrimaryHome:(id <MKFHomeManagerHome>)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
