
@interface ACUISActivityController : NSObject {
    _TtC18ActivityUIServices18ActivityController * _activityController;
    NSMapTable * _activityUpdateProviders;
}

@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityController *activityController;
@property (nonatomic, retain) NSMapTable *activityUpdateProviders;
@property (nonatomic, readonly) bool isActivityEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activityController;
- (id)activityProviderWrapping:(id)arg1;
- (id)activityUpdateProviders;
- (void)disableActivitiesForIdentifier:(id)arg1;
- (void)endActivity:(id)arg1;
- (id)init;
- (bool)isActivityActive:(id)arg1;
- (bool)isActivityEnabled;
- (id)observeActivityAlertsWithHandler:(id /* block */)arg1;
- (id)observeActivityUpdatesWithHandler:(id /* block */)arg1;
- (void)setActivityController:(id)arg1;
- (void)setActivityUpdateProviders:(id)arg1;
- (void)setSystemProvidedMetrics:(id)arg1;

@end
