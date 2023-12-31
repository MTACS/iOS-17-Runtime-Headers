
@interface _UIFeedbackEventBehavior : UINotificationFeedbackGenerator

+ (void)_privateEventOccurred:(long long)arg1;
+ (id)eventBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (void)eventOccurred:(long long)arg1;

- (void)_activateAndPlayEvent:(long long)arg1;
- (void)_privateEventOccurred:(long long)arg1;
- (void)eventOccurred:(long long)arg1;

@end
