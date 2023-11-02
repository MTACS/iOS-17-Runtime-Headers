
@protocol DTObjectAllocServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSNumber *)attachToPid:(NSNumber *)arg1 eventsMask:(NSNumber *)arg2;
- (NSDictionary *)preparedEnvironmentForLaunch:(NSDictionary *)arg1 eventsMask:(NSNumber *)arg2;
- (void)stopCollection;

@end
