
@protocol HMDAPSConnection <NSObject>

@required

- (<HMDAPSConnectionDelegate> *)delegate;
- (NSData *)publicToken;
- (void)setDelegate:(id <HMDAPSConnectionDelegate>)arg1;

@end
