
@interface ATXMindlessCyclingUsageAccumulator : NSObject {
    NSMutableArray * _appInFocusStartingEvents;
    BPSPublisher * _appLaunchPublisher;
    NSArray * _mindlessCyclingEvents;
    NSMutableArray * _mindlessCyclingEventsAccumulator;
    ATXUsageInsightsAppSessionEvent * _stagedEventToAdd;
}

@property (nonatomic, readonly, copy) NSArray *mindlessCyclingEvents;

- (void).cxx_destruct;
- (bool)accumulateMindlessCyclingEvents;
- (id)eventWithBundleID:(id)arg1 launchReason:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 duration:(double)arg5;
- (id)init;
- (id)initWithAppLaunchPublisher:(id)arg1;
- (id)mindlessCyclingEvents;
- (void)recordAppLaunchEndEvent:(id)arg1;
- (void)recordAppLaunchStartEvent:(id)arg1;

@end
