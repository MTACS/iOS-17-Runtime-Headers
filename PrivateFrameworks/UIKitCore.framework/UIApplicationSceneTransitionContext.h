
@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (setter=SBSUI_setInCallAnalyticsSource:, nonatomic, copy) NSString *SBSUI_inCallAnalyticsSource;
@property (nonatomic, retain) UISClickAttribution *clickAttribution;
@property (nonatomic) bool disableTouchCancellationOnRotation;
@property (nonatomic) double execTime;
@property (nonatomic) bool forTesting;
@property (getter=_lifecycleActionType, setter=_setLifecycleActionType:, nonatomic) unsigned long long lifecycleActionType;
@property (nonatomic, retain) UISPasteSharingToken *pasteSharingToken;
@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic) bool safeMode;
@property (nonatomic) bool shouldTakeKeyboardFocus;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) long long statusBarAnimation;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) bool waitForBackgroundTaskCompletion;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (unsigned long long)_lifecycleActionType;
- (void)_setLifecycleActionType:(unsigned long long)arg1;
- (id)clickAttribution;
- (bool)disableTouchCancellationOnRotation;
- (double)execTime;
- (bool)forTesting;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)pasteSharingToken;
- (id)payload;
- (bool)safeMode;
- (void)setClickAttribution:(id)arg1;
- (void)setDisableTouchCancellationOnRotation:(bool)arg1;
- (void)setExecTime:(double)arg1;
- (void)setForTesting:(bool)arg1;
- (void)setPasteSharingToken:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSafeMode:(bool)arg1;
- (void)setShouldTakeKeyboardFocus:(bool)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (void)setStatusBarAnimation:(long long)arg1;
- (void)setUserLaunchEventTime:(double)arg1;
- (void)setWaitForBackgroundTaskCompletion:(bool)arg1;
- (bool)shouldTakeKeyboardFocus;
- (unsigned long long)signpostID;
- (long long)statusBarAnimation;
- (double)userLaunchEventTime;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (bool)waitForBackgroundTaskCompletion;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)SBSUI_inCallAnalyticsSource;
- (void)SBSUI_setInCallAnalyticsSource:(id)arg1;

@end
