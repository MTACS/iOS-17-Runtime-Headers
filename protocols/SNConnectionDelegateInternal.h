
@protocol SNConnectionDelegateInternal

@required

- (void)didCloseConnection:(SNConnectionInternal *)arg1;
- (void)didEncounterError:(SNConnectionInternal *)arg1 error:(NSError *)arg2;
- (void)didEncounterIntermediateError:(SNConnectionInternal *)arg1 error:(NSError *)arg2;
- (void)didOpenConnectionType:(SNConnectionInternal *)arg1 type:(SNConnectionTypeInternal *)arg2 routeId:(NSString *)arg3 delay:(double)arg4 method:(NSString *)arg5;
- (void)didReceiveAceObject:(SNConnectionInternal *)arg1 object:(AceObject *)arg2;
- (void)didReceiveObject:(SNConnectionInternal *)arg1 object:(NSData *)arg2;
- (void)willStartConnection:(SNConnectionInternal *)arg1 type:(SNConnectionTypeInternal *)arg2;
- (void)willStartConnection:(SNConnectionInternal *)arg1 with:(NSDictionary *)arg2;

@end
