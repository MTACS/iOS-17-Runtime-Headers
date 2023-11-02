
@interface HDHRNotificationMetric : NSObject {
    NSString * _cardioFitnessNotificationType;
    NSNumber * _doNotDisturbOn;
    long long  _irregularRhythmNotificationsAlgorithmVersion;
    NSNumber * _notificationThreshold;
    NSString * _notificationType;
}

@property (nonatomic, copy) NSString *cardioFitnessNotificationType;
@property (getter=isDoNotDisturbOn, nonatomic, copy) NSNumber *doNotDisturbOn;
@property (nonatomic) long long irregularRhythmNotificationsAlgorithmVersion;
@property (nonatomic, copy) NSNumber *notificationThreshold;
@property (nonatomic, readonly, copy) NSString *notificationType;

+ (id)eventName;

- (void).cxx_destruct;
- (id)cardioFitnessNotificationType;
- (id)eventPayload;
- (id)initWithNotificationType:(id)arg1;
- (long long)irregularRhythmNotificationsAlgorithmVersion;
- (id)isDoNotDisturbOn;
- (id)notificationThreshold;
- (id)notificationType;
- (void)setCardioFitnessNotificationType:(id)arg1;
- (void)setDoNotDisturbOn:(id)arg1;
- (void)setIrregularRhythmNotificationsAlgorithmVersion:(long long)arg1;
- (void)setNotificationThreshold:(id)arg1;
- (void)submit;

@end
