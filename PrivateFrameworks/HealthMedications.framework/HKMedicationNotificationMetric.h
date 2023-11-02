
@interface HKMedicationNotificationMetric : NSObject {
    NSNumber * _areHealthNotificationsAuthorized;
    NSDictionary * _eventPayload;
    HKMedicationAnalyticsGenericFieldsProvider * _genericDataProvider;
    long long  _interactionType;
    long long  _type;
}

@property (nonatomic, readonly) NSNumber *areHealthNotificationsAuthorized;
@property (nonatomic, copy) NSDictionary *eventPayload;
@property (nonatomic) long long interactionType;
@property (nonatomic, readonly) long long type;

+ (id)eventName;

- (void).cxx_destruct;
- (id)areHealthNotificationsAuthorized;
- (id)description;
- (id)eventPayload;
- (id)initWithType:(long long)arg1 areHealthNotificationsAuthorized:(id)arg2 dataSource:(id)arg3;
- (long long)interactionType;
- (id)interactionTypeValue;
- (void)setEventPayload:(id)arg1;
- (void)setInteractionType:(long long)arg1;
- (long long)type;
- (id)typeValue;

@end
