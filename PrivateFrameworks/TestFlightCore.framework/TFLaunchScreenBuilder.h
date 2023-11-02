
@interface TFLaunchScreenBuilder : NSObject

+ (id)_lockupWithAppName:(id)arg1 shortVersionString:(id)arg2 bundleVersionString:(id)arg3 expirationDate:(id)arg4 iconUrlTemplate:(id)arg5;
+ (id)buildLaunchScreenFromBetaAppLaunchInfo:(id)arg1;
+ (id)buildLaunchScreenWithAppName:(id)arg1 shortVersionString:(id)arg2 bundleVersionString:(id)arg3 expirationDate:(id)arg4 iconUrlTemplate:(id)arg5 testerNotes:(id)arg6;

@end
