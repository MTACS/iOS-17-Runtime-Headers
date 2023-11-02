
@interface CMOdometer : NSObject <HDCoreMotionDataSource> {
    <CMOdometerDelegate> * _delegate;
    CMOdometerProxy * _odometerProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CMOdometerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CMOdometerProxy *odometerProxy;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)odometerProxy;
- (void)setDelegate:(id)arg1;
- (void)startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)arg1;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id /* block */)arg2;
- (void)stopCyclingWorkoutDistanceUpdates;
- (void)stopOdometerUpdates;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void)hd_beginStreamingFromDatum:(id)arg1 handler:(id /* block */)arg2;
- (void)hd_stopStreaming;

@end
