
@interface _MKFOutgoingInvitation : _MKFInvitation <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFOutgoingInvitation, MKFOutgoingInvitationPrivateExtensions>

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic, copy) NSNumber *announceAccessLevel;
@property (nonatomic, copy) NSNumber *cameraAccessLevel;
@property (nonatomic, readonly, copy) MKFOutgoingInvitationDatabaseID *databaseID;
@property (nonatomic, copy) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic, copy) NSNumber *invitationState;
@property (nonatomic, copy) NSString *inviteeUserID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, retain) _MKFUser *pendingUser;
@property (nonatomic, retain) <MKFUser> *pendingUser;
@property (nonatomic, copy) NSNumber *privilege;
@property (nonatomic, copy) NSNumber *remoteAccessAllowed;
@property (nonatomic, retain) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (id)castIfOutgoingInvitation;
- (id)databaseID;

@end
