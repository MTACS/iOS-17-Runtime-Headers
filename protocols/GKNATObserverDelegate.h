
@protocol GKNATObserverDelegate

@optional

- (void)NATTypeDictionaryUpdated:(NSDictionary *)arg1;
- (void)NATTypeDidChange:(int)arg1;
- (void)triggerInterfaceChange;

@end
