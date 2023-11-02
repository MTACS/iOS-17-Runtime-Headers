
@protocol SAAnalyticsServiceProtocol <NSObject>

@required

- (void)addAggressiveScanRequest:(bool)arg1;
- (void)addAlertWithContext:(NSDictionary *)arg1;
- (void)addDeviceFetchResultCount:(unsigned long long)arg1 type1count:(unsigned long long)arg2 type2count:(unsigned long long)arg3 type3count:(unsigned long long)arg4 type4count:(unsigned long long)arg5 type5count:(unsigned long long)arg6 type6count:(unsigned long long)arg7 type7count:(unsigned long long)arg8 type8count:(unsigned long long)arg9 safeCount:(unsigned long long)arg10 usingSameSafe:(bool)arg11;
- (void)addDidSeparateWhileInVisit:(bool)arg1 didRejoinPriorExit:(bool)arg2;
- (void)addGpsLocationRequest:(bool)arg1;
- (void)addNumDevicesWithYou:(unsigned long long)arg1;
- (void)addPreArrivalAlertTime:(double)arg1 didRejoinPriorExit:(bool)arg2;
- (void)addSafeLocationFetchResultCount:(unsigned long long)arg1;
- (void)addScanDuration:(double)arg1;
- (void)addScanDurationForFindingRelevantItemsOnly:(double)arg1;
- (void)addVisit:(bool)arg1 withRadius:(unsigned long long)arg2;
- (void)addWakeTimerRequest;
- (void)addWifiLocationRequest:(bool)arg1;
- (void)publishAndResetAggregation;
- (void)resetAggregation;
- (void)setActiveState:(bool)arg1;
- (void)setInSafeLocationState:(bool)arg1;
- (void)setInTravelState:(bool)arg1;
- (void)setInUnsafeLocationState:(bool)arg1;
- (void)submitAlertRateEvent:(NSNumber *)arg1 alertType:(NSNumber *)arg2;
- (void)submitDefaultAlertRateEvent;
- (void)submitEvent:(NSString *)arg1 content:(NSDictionary *)arg2;

@end
