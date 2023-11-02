
@protocol SiriAnalyticsSensitiveConditionsObserverDelegate

@required

- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2;

@end
