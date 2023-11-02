
@protocol CALNTriggeredEventNotificationDataSourceDelegate <NSObject>

@required

- (void)dataSource:(id <CALNTriggeredEventNotificationDataSource>)arg1 travelAdvisoryAuthorizationChanged:(bool)arg2;
- (void)dataSource:(id <CALNTriggeredEventNotificationDataSource>)arg1 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(NSString *)arg2;
- (void)dataSource:(id <CALNTriggeredEventNotificationDataSource>)arg1 triggeredWithSourceClientIdentifier:(NSString *)arg2 triggerData:(CALNTriggeredEventNotificationTriggerData *)arg3;

@end
