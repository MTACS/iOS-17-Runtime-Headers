
@interface NCNotificationListStalenessEventTracker : NSObject {
    NSMutableDictionary * _lastDisplayedDateByNotificationMetadata;
    NCNotificationListSection * _notificationList;
    NSObject<OS_dispatch_queue> * _queue;
    PETScalarEventTracker * _stalenessEventTracker;
    NCNotificationStructuredSectionList * _structuredSectionList;
}

@property (nonatomic) NCNotificationListSection *notificationList;
@property (nonatomic) NCNotificationStructuredSectionList *structuredSectionList;

+ (id)_allMetricsSafeBundleIdentifiers;
+ (id)_metricsSafeBundleIdentifierByBundleIdentifier;
+ (id)_metricsSafeBundleIdentifierForBundleIdentifier:(id)arg1;
+ (id)eventTrackerWithAutomaticCollation;

- (void).cxx_destruct;
- (void)_handleListPresentedEvent;
- (void)_queue_collateAndRecordMetrics;
- (void)_queue_processRequests:(id)arg1 timestamp:(id)arg2;
- (void)_startAutocollation;
- (void)_stopAutocollation;
- (void)collateAndRecordMetrics;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1;
- (id)init;
- (id)notificationList;
- (void)setNotificationList:(id)arg1;
- (void)setStructuredSectionList:(id)arg1;
- (id)structuredSectionList;

@end
