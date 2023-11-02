
@protocol HMDHAPAccessoryReader <NSObject>

@required

- (void)submitReadRequests:(NSArray *)arg1 sourceType:(unsigned long long)arg2 requestMessage:(HMFMessage *)arg3;

@end
