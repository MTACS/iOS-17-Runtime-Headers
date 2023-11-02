
@protocol DNDSRemoteServiceProviderAssertionDelegate <NSObject>

@required

- (DNDModeAssertion *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 activeAssertionWithClientIdentifer:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 allActiveModeAssertionsWithError:(id*)arg2;
- (DNDModeAssertion *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 assertionWithClientIdentifer:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 invalidateAllModeAssertionsTakenBeforeDate:(NSDate *)arg2 forReason:(unsigned long long)arg3 clientIdentifier:(NSString *)arg4 error:(id*)arg5;
- (DNDModeAssertionInvalidation *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 invalidateModeAssertionForClientIdentifier:(NSString *)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 details:(DNDModeAssertionInvalidationDetails *)arg5 error:(id*)arg6;
- (DNDModeAssertionInvalidation *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 invalidateModeAssertionWithUUID:(NSUUID *)arg2 reason:(unsigned long long)arg3 reasonOverride:(unsigned long long)arg4 clientIdentifier:(NSString *)arg5 error:(id*)arg6;
- (DNDModeAssertionInvalidation *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 latestInvalidationWithClientIdentifer:(NSString *)arg2 error:(id*)arg3;
- (DNDModeAssertion *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 takeModeAssertionWithDetails:(DNDModeAssertionDetails *)arg2 clientIdentifier:(NSString *)arg3 error:(id*)arg4;

@end
