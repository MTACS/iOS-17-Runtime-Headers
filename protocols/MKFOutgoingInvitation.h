
@protocol MKFOutgoingInvitation <MKFInvitation, MKFOutgoingInvitationPublicExtensions>

@required

- (NSString *)accessCode;
- (NSNumber *)announceAccessLevel;
- (NSNumber *)cameraAccessLevel;
- (MKFOutgoingInvitationDatabaseID *)databaseID;
- (NSDate *)dateSent;
- (<MKFHome> *)home;
- (NSString *)inviteeUserID;
- (<MKFUser> *)pendingUser;
- (NSNumber *)privilege;
- (NSNumber *)remoteAccessAllowed;
- (void)setAccessCode:(NSString *)arg1;
- (void)setAnnounceAccessLevel:(NSNumber *)arg1;
- (void)setCameraAccessLevel:(NSNumber *)arg1;
- (void)setDateSent:(NSDate *)arg1;
- (void)setInviteeUserID:(NSString *)arg1;
- (void)setPendingUser:(id <MKFUser>)arg1;
- (void)setPrivilege:(NSNumber *)arg1;
- (void)setRemoteAccessAllowed:(NSNumber *)arg1;
- (void)setShareToken:(CKDeviceToDeviceShareInvitationToken *)arg1;
- (CKDeviceToDeviceShareInvitationToken *)shareToken;

@end
