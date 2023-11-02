
@interface SBMutableSwitcherTransitionRequest : SBSwitcherTransitionRequest

@property (nonatomic, retain) SBDisplayItem *activatingDisplayItem;
@property (nonatomic) long long animationDisabled;
@property (nonatomic, retain) SBFFluidBehaviorSettings *animationSettings;
@property (getter=isAppLaunchDuringWindowDragGesture, setter=setAppLaunchDuringWindowDragGesture:, nonatomic) bool appLaunchDuringWindowDragGesture;
@property (nonatomic, retain) SBAppLayout *appLayout;
@property (nonatomic) long long appLayoutEnvironment;
@property (nonatomic) long long autoPIPDisabled;
@property (nonatomic, copy) NSString *bundleIdentifierForAppExpose;
@property (nonatomic) long long entityInsertionPolicy;
@property (nonatomic) bool fenceSceneUpdate;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic) long long floatingSwitcherVisible;
@property (nonatomic) long long peekConfiguration;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) bool preventSwitcherRecencyModelUpdates;
@property (nonatomic) bool sceneUpdatesOnly;
@property (nonatomic) long long source;
@property (nonatomic) long long unlockedEnvironmentMode;

@end
