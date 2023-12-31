
@protocol DTXPCControlServiceRequests <DTXAllowedRPC>

@required

- (void)observeServicesWithIdentifier:(NSString *)arg1 requestingProcess:(int)arg2 environment:(NSDictionary *)arg3 arguments:(NSArray *)arg4 options:(NSDictionary *)arg5;
- (void)requestDebugLaunchOfDaemonWithSpecifier:(NSString *)arg1 programPath:(NSString *)arg2 environment:(NSDictionary *)arg3 arguments:(NSArray *)arg4 options:(NSDictionary *)arg5;
- (void)stopObservationsForIdentifier:(NSString *)arg1 requestingProcess:(int)arg2;

@end
