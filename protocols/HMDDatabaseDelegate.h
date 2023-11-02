
@protocol HMDDatabaseDelegate <NSObject>

@optional

- (void)database:(id <HMDDatabase>)arg1 didCreateZoneWithName:(NSString *)arg2 isPrivate:(bool)arg3;
- (void)database:(id <HMDDatabase>)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)database:(id <HMDDatabase>)arg1 didRemoveZoneWithName:(NSString *)arg2 isPrivate:(bool)arg3;
- (NAFuture *)database:(id <HMDDatabase>)arg1 willRemoveZoneWithName:(NSString *)arg2 isPrivate:(bool)arg3;

@end
