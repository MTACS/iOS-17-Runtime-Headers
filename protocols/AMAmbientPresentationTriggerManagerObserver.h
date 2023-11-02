
@protocol AMAmbientPresentationTriggerManagerObserver <NSObject>

@optional

- (void)ambientPresentationManager:(AMAmbientPresentationTriggerManager *)arg1 didUpdatePresentationState:(long long)arg2;
- (void)ambientPresentationManager:(AMAmbientPresentationTriggerManager *)arg1 didUpdatePresentationState:(long long)arg2 analogousTriggerEvents:(bool)arg3;

@end
