
@interface FBKDEDHelper : NSObject

+ (void)_getBugSessionConfigWithSubmissionType:(long long)arg1 formId:(long long)arg2 device:(id)arg3 completion:(id /* block */)arg4;
+ (void)_getSessionForForm:(id)arg1 device:(id)arg2 isAdoptingSession:(bool)arg3 shouldGetSessionStatus:(bool)arg4 completion:(id /* block */)arg5;
+ (void)_getSessionWithIdentifier:(id)arg1 configuration:(id)arg2 dedDevice:(id)arg3 getDetails:(bool)arg4 shouldGetSessionStatus:(bool)arg5 completion:(id /* block */)arg6;
+ (void)_getSessionWithIdentifier:(id)arg1 configuration:(id)arg2 device:(id)arg3 getDetails:(bool)arg4 shouldGetSessionStatus:(bool)arg5 completion:(id /* block */)arg6;
+ (id)_seedPortal;
+ (id)_seedingHost;
+ (void)_startSessionByFirstPairingWithConfig:(id)arg1 device:(id)arg2 grouped:(id)arg3 identifier:(id)arg4 shouldGetDetails:(bool)arg5 shouldGetSessionStatus:(bool)arg6 completion:(id /* block */)arg7;
+ (id)adoptSessionIdWithExistingSessionId:(id)arg1;
+ (id)bugSessionIDForAdoptingLocalFilesWithFilerForm:(id)arg1;
+ (id)bugSessionIDForForm:(id)arg1 device:(id)arg2;
+ (void)cleanupBugSessionDirectoriesForForm:(id)arg1;
+ (void)completeEnhancedLoggingWithFollowup:(id)arg1 devicesController:(id)arg2 completion:(id /* block */)arg3;
+ (void)didFailToPinPairOnDemandWithDevice:(id)arg1 error:(long long)arg2 identifier:(id)arg3 observer:(id)arg4 completion:(id /* block */)arg5;
+ (void)fetchTextDataOnMatcherPredicates:(id)arg1 fromSession:(id)arg2 completion:(id /* block */)arg3;
+ (void)getSessionForForm:(id)arg1 device:(id)arg2 shouldGetSessionStatus:(bool)arg3 completion:(id /* block */)arg4;
+ (void)getStateOnSession:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)reconnectBugSessionWithIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)reconnectWithBugSessionWithIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)sendLocalFilesToDED:(id)arg1 withForm:(id)arg2 withCompletion:(id /* block */)arg3;

@end
