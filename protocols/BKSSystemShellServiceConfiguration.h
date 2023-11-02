
@protocol BKSSystemShellServiceConfiguration

@required

- (NSObject<OS_dispatch_queue> *)calloutQueue;
- (id /* block */)collectiveWatchdogPingBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (double)idleSleepInterval;
- (void)setCalloutQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setCollectiveWatchdogPingBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (void)setIdleSleepInterval:(double)arg1;
- (void)setWaitForDataMigration:(bool)arg1;
- (bool)waitForDataMigration;

@end
