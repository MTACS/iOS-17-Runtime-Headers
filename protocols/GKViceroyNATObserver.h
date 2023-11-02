
@protocol GKViceroyNATObserver

@required

- (void)applySettingsAndAwaitReady:(NSDictionary *)arg1;
- (unsigned long long)currentNATType;
- (void)getNATTypeWithForceRelay:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@end
