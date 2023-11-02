
@protocol CRSInCallClientToServerInterface <NSObject>

@required

- (oneway void)presentInCallService;
- (oneway void)setAllowsBanners:(NSNumber *)arg1;

@end
