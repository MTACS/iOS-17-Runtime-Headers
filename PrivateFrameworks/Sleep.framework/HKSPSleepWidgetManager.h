
@interface HKSPSleepWidgetManager : NSObject {
    <NAScheduler> * _reloadScheduler;
    HKSPSleepStore * _sleepStore;
    NSArray * _timelineControllers;
}

@property (nonatomic, readonly) <NAScheduler> *reloadScheduler;
@property (nonatomic, readonly) HKSPSleepStore *sleepStore;
@property (nonatomic, readonly) NSArray *timelineControllers;

+ (bool)_shouldForceWidgetReload:(unsigned long long)arg1;
+ (id)_widgetReloadDescription:(unsigned long long)arg1;
+ (id)defaultTimelineControllers;
+ (id)widgetBundleIdentifierForCurrentDevice;

- (void).cxx_destruct;
- (id)initWithSleepStore:(id)arg1;
- (id)initWithSleepStore:(id)arg1 timelineControllers:(id)arg2;
- (id)reloadScheduler;
- (void)reloadWidgetsWithReason:(unsigned long long)arg1;
- (id)sleepStore;
- (id)timelineControllers;

@end
