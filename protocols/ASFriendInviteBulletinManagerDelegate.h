
@protocol ASFriendInviteBulletinManagerDelegate <NSObject>

@required

- (void)friendInviteBulletinManagerDidReceiveActionResponse:(long long)arg1 fromContactWithUUID:(NSUUID *)arg2;

@end
