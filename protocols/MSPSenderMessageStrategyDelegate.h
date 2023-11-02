
@protocol MSPSenderMessageStrategyDelegate <NSObject>

@required

- (MSPSharedTripNotificationRules *)rulesForParticipant:(NSString *)arg1;
- (void)touchedRules;

@end
