
@interface HKMobilityWalkingSteadinessAnalyticsNotificationEventMetric : NSObject <HKMobilityAnalyticsEventMetric> {
    NSNumber * _age;
    NSNumber * _areHealthNotificationsAuthorized;
    NSNumber * _biologicalSex;
    NSNumber * _daysSinceLastNotification;
    bool  _improveHealthAndActivityAllowed;
    NSString * _notificationClassification;
    NSString * _notificationType;
}

@property (nonatomic, retain) NSNumber *age;
@property (nonatomic, retain) NSNumber *areHealthNotificationsAuthorized;
@property (nonatomic, retain) NSNumber *biologicalSex;
@property (nonatomic, retain) NSNumber *daysSinceLastNotification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isImproveHealthAndActivityAllowed, nonatomic) bool improveHealthAndActivityAllowed;
@property (nonatomic, retain) NSString *notificationClassification;
@property (nonatomic, retain) NSString *notificationType;
@property (readonly) Class superclass;

+ (bool)requiresImproveHealthAndActivityAllowed;

- (void).cxx_destruct;
- (id)age;
- (id)areHealthNotificationsAuthorized;
- (id)biologicalSex;
- (id)daysSinceLastNotification;
- (id)eventName;
- (id)eventPayload;
- (id)initWithImproveHealthAndActivityAllowed:(bool)arg1;
- (bool)isImproveHealthAndActivityAllowed;
- (id)notificationClassification;
- (id)notificationType;
- (void)setAge:(id)arg1;
- (void)setAreHealthNotificationsAuthorized:(id)arg1;
- (void)setBiologicalSex:(id)arg1;
- (void)setDaysSinceLastNotification:(id)arg1;
- (void)setImproveHealthAndActivityAllowed:(bool)arg1;
- (void)setNotificationClassification:(id)arg1;
- (void)setNotificationType:(id)arg1;

@end
