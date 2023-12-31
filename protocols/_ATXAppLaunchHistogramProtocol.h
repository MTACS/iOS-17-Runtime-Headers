
@protocol _ATXAppLaunchHistogramProtocol

@required

- (bool)bundleHasBeenLaunched:(NSString *)arg1;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLifeInDays:(double)arg1;
- (bool)removeHistoryForBundleId:(NSString *)arg1;
- (int)removeHistoryForBundleIds:(id <NSFastEnumeration>)arg1;
- (void)resetData;
- (void)resetHistogram:(ATXHistogramData *)arg1;
- (double)totalLaunches;
- (void)verifyDataIntegrity;

@end
