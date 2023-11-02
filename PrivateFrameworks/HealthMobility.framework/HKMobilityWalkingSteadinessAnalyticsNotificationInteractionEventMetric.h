
@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventMetric : NSObject <HKMobilityAnalyticsEventMetric> {
    NSNumber * _age;
    NSNumber * _biologicalSex;
    bool  _improveHealthAndActivityAllowed;
    NSString * _notificationClassification;
    NSString * _notificationInteractionType;
    NSString * _notificationType;
}

@property (nonatomic, retain) NSNumber *age;
@property (nonatomic, retain) NSNumber *biologicalSex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isImproveHealthAndActivityAllowed, nonatomic) bool improveHealthAndActivityAllowed;
@property (nonatomic, copy) NSString *notificationClassification;
@property (nonatomic, copy) NSString *notificationInteractionType;
@property (nonatomic, copy) NSString *notificationType;
@property (readonly) Class superclass;

+ (bool)requiresImproveHealthAndActivityAllowed;

- (void).cxx_destruct;
- (id)age;
- (id)biologicalSex;
- (id)eventName;
- (id)eventPayload;
- (id)initWithImproveHealthAndActivityAllowed:(bool)arg1;
- (bool)isImproveHealthAndActivityAllowed;
- (id)notificationClassification;
- (id)notificationInteractionType;
- (id)notificationType;
- (void)setAge:(id)arg1;
- (void)setBiologicalSex:(id)arg1;
- (void)setImproveHealthAndActivityAllowed:(bool)arg1;
- (void)setNotificationClassification:(id)arg1;
- (void)setNotificationInteractionType:(id)arg1;
- (void)setNotificationType:(id)arg1;

@end
