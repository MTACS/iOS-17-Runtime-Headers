
@interface WFUserInteractionResource : WFResource <WFApplicationStateObserver>

+ (bool)isSingleton;

- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (void)refreshAvailability;

@end
