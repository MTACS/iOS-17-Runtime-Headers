
@protocol ANAnnounceReachabilityServiceInterfaceDelegate <NSObject>

@required

- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(NSString *)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(NSUUID *)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(NSString *)arg2 inHomeName:(NSString *)arg3;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(NSUUID *)arg2 inHomeUUID:(NSUUID *)arg3;

@end
