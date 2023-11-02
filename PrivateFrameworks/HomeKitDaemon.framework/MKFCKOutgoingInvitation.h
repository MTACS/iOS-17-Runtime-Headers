
@interface MKFCKOutgoingInvitation : MKFCKHomeObject

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long cameraAccessLevel;
@property (nonatomic, copy) NSUUID *conflictResolutionUUID;
@property (nonatomic, copy) NSDate *dateSent;
@property (nonatomic, copy) NSDate *expiryDate;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic) long long invitationState;
@property (nonatomic, copy) NSString *inviteeUserID;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, retain) MKFCKUser *pendingUser;
@property (nonatomic) long long privilege;
@property (nonatomic) bool remoteAccessAllowed;
@property (nonatomic, retain) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
