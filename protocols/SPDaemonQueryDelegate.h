
@protocol SPDaemonQueryDelegate <NSObject>

@required

- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 encounteredError:(NSError *)arg2;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 gotResultSet:(SPResultSet *)arg2 replace:(bool)arg3 partiallyComplete:(bool)arg4 priorityFastPath:(bool)arg5 update:(bool)arg6 complete:(bool)arg7 delayedTopHit:(bool)arg8 unchanged:(bool)arg9 forceStable:(bool)arg10 blendingDuration:(double)arg11 geoEntityString:(NSString *)arg12 supportedAppScopes:(NSArray *)arg13 showMoreInAppInfo:(NSArray *)arg14;
- (void)searchDaemonRankingLog:(NSString *)arg1;

@optional

- (void)searchDaemonLocalSuggestionsData:(NSData *)arg1;
- (void)searchDaemonSuggestionsArray:(NSArray *)arg1;

@end
