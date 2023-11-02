
@interface _MKFInvitation : _MKFModel <MKFInvitation, MKFInvitationPrivateExtensions>

@property (nonatomic, readonly, copy) MKFInvitationDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic, copy) NSNumber *invitationState;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfInvitation;
- (id)databaseID;

@end
