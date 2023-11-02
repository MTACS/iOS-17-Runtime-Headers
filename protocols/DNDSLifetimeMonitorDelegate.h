
@protocol DNDSLifetimeMonitorDelegate <NSObject>

@required

- (void)activeAssertionsDidChangeForLifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1;
- (void)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 lifetimeDidExpireForAssertionUUIDs:(NSArray *)arg2 expirationDate:(NSDate *)arg3;
- (void)lifetimeMonitor:(void *)arg1 registerTimerHandlerWithServiceIdentifier:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: <DNDSLifetimeMonitor> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSObject<OS_xpc_object> *, void*
- (void)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 setTimer:(DNDSXPCTimer *)arg2;
- (DNDModeAssertion *)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 takeModeAssertionWithDetails:(DNDModeAssertionDetails *)arg2 clientIdentifier:(NSString *)arg3 error:(id*)arg4;

@end
