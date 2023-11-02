
@protocol DTNetworkingServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (void)setTargetPID:(NSNumber *)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
