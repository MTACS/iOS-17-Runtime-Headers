
@interface UIFocusDebugger : NSObject

+ (id)_ancestryForEnvironment:(id)arg1;
+ (id)_legacy_checkFocusabilityForView:(id)arg1;
+ (id)_statusForFocusSystem:(id)arg1 scene:(id)arg2 includeSceneLog:(bool)arg3 includeDeferralTarget:(bool)arg4;
+ (id)_verboseStatus;
+ (id)checkFocusGroupTreeForEnvironment:(id)arg1;
+ (id)checkFocusabilityForItem:(id)arg1;
+ (id)focusGroupsForEnvironment:(id)arg1;
+ (id)help;
+ (id)preferredFocusEnvironmentsForEnvironment:(id)arg1;
+ (id)simulateFocusUpdateRequestFromEnvironment:(id)arg1;
+ (id)status;

@end
