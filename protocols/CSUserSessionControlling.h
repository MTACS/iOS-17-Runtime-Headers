
@protocol CSUserSessionControlling <NSObject>

@required

- (bool)isLogoutSupported;
- (void)logout;

@end
