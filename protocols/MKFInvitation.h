
@protocol MKFInvitation <MKFModel, MKFInvitationPublicExtensions>

@required

- (MKFInvitationDatabaseID *)databaseID;
- (NSDate *)expiryDate;
- (NSUUID *)idsIdentifier;
- (NSNumber *)invitationState;
- (void)setExpiryDate:(NSDate *)arg1;
- (void)setIdsIdentifier:(NSUUID *)arg1;
- (void)setInvitationState:(NSNumber *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
