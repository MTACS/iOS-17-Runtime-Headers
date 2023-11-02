
@protocol HMDAPSConnectionDelegate <NSObject>

@required

- (void)connection:(id <HMDAPSConnection>)arg1 didReceivePublicToken:(NSData *)arg2;

@end
