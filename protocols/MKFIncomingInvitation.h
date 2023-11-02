
@protocol MKFIncomingInvitation <MKFInvitation, MKFIncomingInvitationPublicExtensions>

@required

- (MKFIncomingInvitationDatabaseID *)databaseID;
- (<MKFHomeManager> *)homeManager;
- (NSUUID *)homeModelID;
- (NSString *)homeName;
- (NSString *)inviterMergeID;
- (NSString *)inviterPairingIdentifier;
- (NSData *)inviterPairingPublicKey;
- (NSString *)inviterUserID;
- (void)setHomeModelID:(NSUUID *)arg1;
- (void)setHomeName:(NSString *)arg1;
- (void)setInviterMergeID:(NSString *)arg1;
- (void)setInviterPairingIdentifier:(NSString *)arg1;
- (void)setInviterPairingPublicKey:(NSData *)arg1;
- (void)setInviterUserID:(NSString *)arg1;
- (void)setShareToken:(NSData *)arg1;
- (void)setShareURL:(NSURL *)arg1;
- (NSData *)shareToken;
- (NSURL *)shareURL;

@end
