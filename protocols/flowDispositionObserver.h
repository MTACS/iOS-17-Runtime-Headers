
@protocol flowDispositionObserver <NSObject>

@required

- (void)configurePolicies:(NSArray *)arg1;
- (bool)enabled;
- (NSMutableDictionary *)infoDir;
- (unsigned int)noteFlow:(TrackedFlow *)arg1 snapshot:(NWStatsProtocolSnapshot *)arg2 present:(bool)arg3 trackedBy:(AppTracker *)arg4;
- (void)noteForegroundState:(bool)arg1 forApp:(NSString *)arg2 hasForegroundApps:(bool)arg3;
- (void)setEnabled:(bool)arg1;

@end
