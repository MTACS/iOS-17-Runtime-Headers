
@protocol HMDHAPAccessoryWriter <NSObject>

@required

- (void)submitWriteRequests:(NSArray *)arg1 sourceType:(unsigned long long)arg2 requestMessage:(HMFMessage *)arg3;

@end
