
@interface PLDiagnostics : NSObject

+ (long long)_deviceClassesFromDeviceClassesString:(id)arg1;
+ (void)_fallBackTapToRadarWithTitle:(id)arg1 description:(id)arg2 radarComponent:(long long)arg3;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)arg1;
+ (void)_radarComponentDetailsForComponent:(long long)arg1 reply:(id /* block */)arg2;
+ (void)_tapToRadarKitDraftWithTitle:(id)arg1 description:(id)arg2 radarComponent:(long long)arg3 displayReason:(id)arg4;
+ (id)_tapToRadarProcessName;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(id /* block */)arg3;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)arg1;
+ (id)diagnosticsURLs;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(id /* block */)arg2;
+ (id)excludingNameExpression;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4 radarComponent:(long long)arg5;
+ (id)logDirectoryURL;
+ (id)matchingNameExpression;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)arg1;
+ (bool)shouldSuppressRadarUserNotificationWithMessage:(id)arg1 radarTitle:(id)arg2;
+ (bool)tapToRadarKitDisabled;
+ (void)tapToRadarWithTitle:(id)arg1 description:(id)arg2 radarComponent:(long long)arg3 displayReason:(id)arg4;

@end
