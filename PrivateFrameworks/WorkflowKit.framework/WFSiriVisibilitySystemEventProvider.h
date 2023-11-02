
@interface WFSiriVisibilitySystemEventProvider : WFApplicationVisibilitySystemEventProvider

- (long long)applicationDidAppearEventType;
- (long long)applicationDidDisappearEventType;
- (bool)layoutContainsApplication:(id)arg1;

@end
