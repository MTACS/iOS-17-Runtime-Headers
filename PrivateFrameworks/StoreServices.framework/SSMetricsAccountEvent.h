
@interface SSMetricsAccountEvent : SSMetricsBaseEvent

@property (nonatomic, retain) NSString *accountEventType;

- (id)accountEventType;
- (id)init;
- (void)setAccountEventType:(id)arg1;
- (void)setAccountEventTypeWithEventIdentifier:(long long)arg1;

@end
