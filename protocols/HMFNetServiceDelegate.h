
@protocol HMFNetServiceDelegate <NSObject>

@optional

- (void)netService:(HMFNetService *)arg1 didUpdateAddresses:(NSArray *)arg2;
- (void)netService:(HMFNetService *)arg1 didUpdateTXTRecord:(NSDictionary *)arg2;
- (void)netServiceDidStartPublishing:(HMFNetService *)arg1;
- (void)netServiceDidStopPublishing:(HMFNetService *)arg1;

@end
