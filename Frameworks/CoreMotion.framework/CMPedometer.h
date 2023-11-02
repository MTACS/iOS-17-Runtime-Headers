
@interface CMPedometer : NSObject <HDCoreMotionDataSource> {
    CMPedometerProxy * _pedometerProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CMPedometerProxy *pedometerProxy;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (long long)authorizationStatus;
+ (bool)isAllDayElevationAvailable;
+ (bool)isCadenceAvailable;
+ (bool)isDistanceAvailable;
+ (bool)isFloorCountingAvailable;
+ (bool)isPaceAvailable;
+ (bool)isPedometerEventTrackingAvailable;
+ (bool)isStepCountingAvailable;

- (id)_pedometerDataWithRecordID:(long long)arg1;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)pedometerProxy;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(id /* block */)arg2;
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)queryRawSpeedToKValueBinsWithHandler:(id /* block */)arg1;
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(id /* block */)arg1;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(id /* block */)arg1;
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(id /* block */)arg1;
- (bool)sendStrideCalibrationHistoryToFile:(id)arg1;
- (void)startPedometerEventUpdatesWithHandler:(id /* block */)arg1;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopPedometerEventUpdates;
- (void)stopPedometerUpdates;
- (id)strideCalibrationDump;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void)hd_beginStreamingFromDatum:(id)arg1 handler:(id /* block */)arg2;
- (void)hd_stopStreaming;

@end
