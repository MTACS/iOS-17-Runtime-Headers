
@protocol HMDHomePresenceCheck <NSObject>

@required

- (bool)areUsersAtHome:(NSArray *)arg1;
- (bool)areUsersNotAtHome:(NSArray *)arg1;
- (bool)isAnyUserAtHome;
- (bool)isNoUserAtHome;
- (bool)isUserAtHome:(HMDUser *)arg1;
- (bool)isUserNotAtHome:(HMDUser *)arg1;

@end
