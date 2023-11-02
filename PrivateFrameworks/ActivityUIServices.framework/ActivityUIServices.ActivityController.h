
@interface ActivityUIServices.ActivityController : NSObject {
    void activities;
    void activityManager;
    void activityPlatterPublisher;
    void activityPlatterStream;
    void activityProviders;
    void cancellableSet;
    void observingActivityUpdates;
    void queue;
    void systemMetricsRequest;
}

@property (nonatomic, readonly) bool areActivitiesEnabled;
@property (nonatomic, retain) _TtC18ActivityUIServices22ActivityMetricsRequest *systemMetricsRequest;

+ (id)shared;

- (void).cxx_destruct;
- (bool)areActivitiesEnabled;
- (void)disableActivitiesForBundleId:(id)arg1;
- (void)endActivityWithIdentifier:(id)arg1;
- (id)init;
- (bool)isActivityActiveWithIdentifier:(id)arg1;
- (id)observeActivityAlertsWithHandler:(id /* block */)arg1;
- (void)observeActivityUpdates;
- (id)observeActivityUpdatesWithHandler:(id /* block */)arg1;
- (void)setSystemMetricsRequest:(id)arg1;
- (id)systemMetricsRequest;

@end
