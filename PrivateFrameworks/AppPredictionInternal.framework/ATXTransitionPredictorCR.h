
@interface ATXTransitionPredictorCR : NSObject <ATXTransitionPredictorProtocol> {
    CLLocation * _locationAtLastPrediction;
    <ATXLocationManagerProtocol> * _locationManager;
    NSDate * _now;
    <ATXPredictedLocationsManagerProtocol> * _predictionsManager;
    ATXPredictedTransition * _upcomingTransition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *now;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getNextTransitionOnActivity:(id)arg1;
- (id)getNextTransitionOnActivity:(id)arg1 date:(id)arg2 location:(id)arg3;
- (id)init;
- (id)initWithLocationManager:(id)arg1 locationPredictionsManager:(id)arg2;
- (void)invalidateCache;
- (bool)isCacheValidForDate:(id)arg1 location:(id)arg2;
- (id)nextExitDate;
- (id)nextLoi;
- (id)now;
- (void)setNow:(id)arg1;
- (bool)updateCacheOnActivity:(id)arg1;

@end
