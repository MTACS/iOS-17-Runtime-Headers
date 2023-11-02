
@protocol AMSMediaTokenServiceProtocol <NSObject>

@required

- (AMSPromise *)fetchMediaToken;
- (void)invalidateMediaToken;

@end
