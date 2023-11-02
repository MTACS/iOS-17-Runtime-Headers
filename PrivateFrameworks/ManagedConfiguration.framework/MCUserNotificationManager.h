
@interface MCUserNotificationManager : NSObject

@property (nonatomic, readonly) bool hasOutstandingNotifications;

+ (id)sharedManager;

- (id)_invalidTargetMessageForDevice:(unsigned long long)arg1;
- (id)_purgatoryMessageForDevice:(unsigned long long)arg1;
- (void)_updateTitle:(id*)arg1 andMessage:(id*)arg2 withTargetFailureInfoForDevice:(unsigned long long)arg3 fromError:(id)arg4;
- (void)_updateTitle:(id*)arg1 andMessage:(id*)arg2 withUnavailableTargetInfoForDevice:(unsigned long long)arg3;
- (void)cancelAllNotificationsCompletionBlock:(id /* block */)arg1;
- (void)cancelNotificationEntriesMatchingPredicate:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)displayQueueProfileError:(id)arg1 targetDevice:(unsigned long long)arg2;
- (void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 textfieldPlaceholder:(id)arg7 displayOnLockScreen:(bool)arg8 dismissOnLock:(bool)arg9 displayInAppWhitelistModes:(bool)arg10 dismissAfterTimeInterval:(double)arg11 assertion:(id)arg12 completionBlock:(id /* block */)arg13;
- (bool)hasOutstandingNotifications;
- (id)init;
- (void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id /* block */)arg4;

@end
