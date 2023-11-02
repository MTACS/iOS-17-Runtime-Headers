
@protocol EKCalendarShareeOrOwner <EKIdentityProtocol>

@required

- (NSString *)UUID;
- (bool)isCurrentUserForScheduling;
- (bool)isCurrentUserForSharing;

@end
