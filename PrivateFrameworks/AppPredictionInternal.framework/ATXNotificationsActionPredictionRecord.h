
@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {
    NSString * _actionPredBundleId;
}

- (void).cxx_destruct;
- (bool)addEvent:(id)arg1;
- (long long)determineEndingInteraction;
- (id)init;
- (id)initWithNotificationId:(id)arg1 timestamp:(id)arg2;
- (bool)isMatchActionPredBundleId:(id)arg1;

@end
