
@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties> {
    RETimeline * _timeline;
    REUpNextTimer * _timelineProgressionTimer;
}

@property (nonatomic, readonly) RETimeline *timeline;

+ (id)supportedFeatures;
+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_nextTimelineTransitionDateAfter:(id)arg1;
- (void)_scheduleTimelineProgressionTimerAfter:(id)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)timeline;
- (void)update;

@end
