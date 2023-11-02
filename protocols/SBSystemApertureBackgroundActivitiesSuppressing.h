
@protocol SBSystemApertureBackgroundActivitiesSuppressing <NSObject>

@required

- (<BSInvalidatable> *)acquireActiveElementAssertionForApplication:(SBApplication *)arg1 reason:(NSString *)arg2;
- (<BSInvalidatable> *)acquireSuppressionAssertionForBackgroundActivities:(NSSet *)arg1 reason:(NSString *)arg2;

@end
