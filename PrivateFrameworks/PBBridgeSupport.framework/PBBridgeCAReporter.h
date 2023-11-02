
@interface PBBridgeCAReporter : NSObject

+ (void)activationServerRespondedAtPage:(unsigned long long)arg1;
+ (id)descriptionForCommTimingType:(unsigned long long)arg1;
+ (id)descriptionForSuccessType:(unsigned long long)arg1;
+ (id)descriptionForTimingType:(unsigned long long)arg1;
+ (void)incrementSuccessType:(unsigned long long)arg1;
+ (void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2;
+ (void)pushTimingForTypeNamed:(id)arg1 withValue:(double)arg2;
+ (void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2;
+ (void)recordAllWatchesDetailButtonVisit:(bool)arg1;
+ (void)recordAlreadyPairedAlertFired:(bool)arg1 afterDuration:(double)arg2 hasFiredBefore:(bool)arg3;
+ (void)recordAlreadyPairedAlertFiredAndWatchRecovered:(double)arg1;
+ (void)recordAlreadyPairedAlertLearnedMore:(bool)arg1;
+ (void)recordDeviceEnrollmentResult:(bool)arg1 retryCount:(unsigned long long)arg2;
+ (void)recordEndOfLifePhoneAlertPresented:(bool)arg1;
+ (void)recordEndOfLifePhoneAlertUserResponse:(bool)arg1;
+ (void)recordPairingTimeBackupsCount:(unsigned long long)arg1;
+ (void)recordPasscodeChallenge:(long long)arg1;
+ (void)recordPasscodeCreatedWithType:(long long)arg1 wasChallenged:(bool)arg2;
+ (void)recordSetupAppInstallChoice:(bool)arg1;
+ (void)recordSigninEventDaily:(unsigned long long)arg1;
+ (void)recordSigninEventFollowup:(unsigned long long)arg1;
+ (void)recordSigninEventPair:(unsigned long long)arg1;
+ (void)recordSigninEventPostPair:(unsigned long long)arg1;
+ (void)recordTabSelection:(long long)arg1 classicCount:(unsigned long long)arg2 tinkerCount:(unsigned long long)arg3;
+ (void)recordTinkerGuardianAcceptedDiagsAndUsage:(bool)arg1;
+ (void)recordTransitionedDynamicHelpViewFromType:(long long)arg1 toType:(long long)arg2;
+ (void)recordUserAwarenessNotificationDuringSetup;
+ (void)recordUserAwarenessNotificationDuringSetupUserEngaged;
+ (void)sendEvent:(id)arg1 with:(id)arg2;
+ (id)stringForSigninEventDaily:(unsigned long long)arg1;
+ (id)stringForSigninEventPostPair:(unsigned long long)arg1;
+ (id)stringForSigninFollowup:(unsigned long long)arg1;
+ (id)stringForSigninPair:(unsigned long long)arg1;

@end
