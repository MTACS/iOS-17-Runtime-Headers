
@protocol RMSSessionManagerDelegate <NSObject>

@required

- (void)sessionManager:(RMSSessionManager *)arg1 sessionDidTimeout:(id)arg2 withIdentifier:(int)arg3;

@end
