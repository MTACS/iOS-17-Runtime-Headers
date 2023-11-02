
@interface _MKFIncomingInvitation : _MKFInvitation <MKFIncomingInvitation, MKFIncomingInvitationPrivateExtensions>

@property (nonatomic, readonly, copy) MKFIncomingInvitationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _MKFHomeManager *homeManager;
@property (nonatomic, readonly, retain) <MKFHomeManager> *homeManager;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic, copy) NSNumber *invitationState;
@property (nonatomic, copy) NSString *inviterMergeID;
@property (nonatomic, copy) NSString *inviterPairingIdentifier;
@property (nonatomic, retain) NSData *inviterPairingPublicKey;
@property (nonatomic, copy) NSString *inviterUserID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) NSData *shareToken;
@property (nonatomic, copy) NSURL *shareURL;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfIncomingInvitation;
- (id)databaseID;

@end
