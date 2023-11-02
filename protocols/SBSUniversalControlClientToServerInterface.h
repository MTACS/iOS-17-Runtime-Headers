
@protocol SBSUniversalControlClientToServerInterface <NSObject>

@required

- (oneway void)setKeyboardFocusDisabled:(NSNumber *)arg1 reason:(NSString *)arg2;
- (oneway void)setScreenEdgesOwned:(NSNumber *)arg1 reason:(NSString *)arg2;

@end
