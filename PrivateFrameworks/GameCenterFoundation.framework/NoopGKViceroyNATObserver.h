
@interface NoopGKViceroyNATObserver : NSObject <GKViceroyNATObserver>

@property (nonatomic, readonly) unsigned long long currentNATType;

- (void)applySettingsAndAwaitReady:(id)arg1;
- (unsigned long long)currentNATType;
- (void)getNATTypeWithForceRelay:(bool)arg1 withHandler:(id /* block */)arg2;

@end
