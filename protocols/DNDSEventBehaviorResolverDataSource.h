
@protocol DNDSEventBehaviorResolverDataSource <NSObject>

@required

- (DNDState *)currentStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1;
- (NSPredicate *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 appPredicateForApplicationIdentifier:(DNDApplicationIdentifier *)arg2 modeIdentifier:(NSString *)arg3;
- (DNDBypassSettings *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 bypassSettingsForClientIdentifier:(NSString *)arg2;
- (DNDConfiguration *)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 configurationForModeIdentifier:(NSString *)arg2;
- (bool)eventBehaviorResolver:(DNDSEventBehaviorResolver *)arg1 isAvailabilityActiveForBundleIdentifier:(NSString *)arg2;

@end
