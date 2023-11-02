
@protocol HMDDatabaseZoneManagerDataSource <HMDCloudShareParticipantsManagerDataSource>

@optional

- (bool)zoneManager:(HMDDatabaseZoneManager *)arg1 shouldRequestShareInvitationFromUser:(HMDUser *)arg2;

@end
