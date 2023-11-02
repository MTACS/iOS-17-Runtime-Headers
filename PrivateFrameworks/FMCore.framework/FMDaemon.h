
@interface FMDaemon : NSObject

- (void)initialize;
- (void)registerXPCEventHandlers;
- (void)run;
- (void)startup;
- (void)startupWithCompletion:(id /* block */)arg1;
- (id)verifyLaunchEventsConfiguration:(id)arg1 withExclusions:(id)arg2;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;

@end
