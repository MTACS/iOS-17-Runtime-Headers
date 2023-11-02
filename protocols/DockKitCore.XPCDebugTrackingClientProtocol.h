
@protocol DockKitCore.XPCDebugTrackingClientProtocol

@required

- (void)dumpTrackerDiagnosticsWithPath:(NSString *)arg1;
- (void)dumpTrackerStateWithPath:(NSString *)arg1;
- (void)pauseTracker;
- (void)resumeTracker;
- (void)returnToBase;
- (void)searchWithCalibrate:(bool)arg1;
- (void)setConfigDictWithDict:(NSDictionary *)arg1;
- (void)setConfigWithKey:(NSString *)arg1 value:(NSNumber *)arg2;
- (void)stopReturnToBase;
- (void)stopSearchWithCalibrate:(bool)arg1;

@end
