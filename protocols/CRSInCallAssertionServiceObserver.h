
@protocol CRSInCallAssertionServiceObserver <NSObject>

@required

- (void)inCallAssertionService:(CRSInCallAssertionService *)arg1 didSetBannersEnabled:(bool)arg2;
- (void)inCallAssertionServiceDidDismiss:(CRSInCallAssertionService *)arg1;
- (void)inCallAssertionServiceDidPresent:(CRSInCallAssertionService *)arg1;

@end
