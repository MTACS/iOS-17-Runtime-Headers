
@interface GCAnalytics : NSObject <GCAnalytics> {
    NSString * _bundleID;
    NSMutableDictionary * _controllersData;
    NSTimer * _eventPollTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instance;

- (void).cxx_destruct;
- (void)checkMultipleControllers;
- (void)dealloc;
- (id)getBundleID;
- (id)init;
- (void)onSiriMotionEnabled;
- (void)publishController:(id)arg1;
- (void)runInputPollTimer;
- (void)sendEvent:(id)arg1 withPayload:(id)arg2;
- (bool)sendEvent:(id)arg1 withPayloadBuilder:(id /* block */)arg2;
- (void)sendEvent:(id)arg1 withXPCPayload:(id)arg2;
- (bool)sendEvent:(id)arg1 withXPCPayloadBuilder:(id /* block */)arg2;
- (void)sendHapticsClientDestroyedEventForBundleID:(id)arg1 productCategory:(id)arg2 totalPlayers:(int)arg3 sessionTotalDuration:(int)arg4 sessionActiveDuration:(int)arg5 terminationReason:(id)arg6;
- (void)sendHapticsEngineCreatedEventForBundleID:(id)arg1 productCategory:(id)arg2 hapticsLocality:(id)arg3;
- (void)sendHapticsErrorRaisedEventFromSource:(id)arg1 productCategory:(id)arg2 errorType:(id)arg3;
- (void)sendHapticsPlayerDestroyedEventForBundleID:(id)arg1 productCategory:(id)arg2 totalEventsProcessed:(int)arg3 transientEventsProcessed:(int)arg4 continuousEventsProcessed:(int)arg5 parameterCurvesProcessed:(int)arg6 sessionTotalDuration:(int)arg7 sessionActiveDuration:(int)arg8;
- (void)sendInputsPressedEvent:(const struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; }*)arg1;
- (void)sendRPKitInstantCaptureBufferStartedEventForBundleID:(id)arg1;
- (void)sendRPKitInstantCaptureSavedEventForBundleID:(id)arg1 productCategory:(id)arg2;
- (void)sendRPKitManualRecordingSavedEventForBundleID:(id)arg1 productCategory:(id)arg2 duration:(int)arg3;
- (void)sendRPKitScreenshotSavedEventForBundleID:(id)arg1 productCategory:(id)arg2;
- (void)sendSettingsButtonCustomizedEventForBundleID:(id)arg1 productCategory:(id)arg2 button:(id)arg3;
- (void)sendSettingsCustomizationsResetEventForBundleID:(id)arg1 productCategory:(id)arg2;
- (void)sendSettingsCustomizationsToggledEventForBundleID:(id)arg1 productCategory:(id)arg2 toggledOn:(bool)arg3;
- (void)sendSettingsCustomizedAppsEventForTotalCustomizedAppsCount:(int)arg1;
- (void)sendSettingsDevicesEventForTotalCustomizedControllersCount:(int)arg1;
- (void)sendSettingsEnteredEvent;
- (void)sendSettingsIdentifyControllerEventForProductCategory:(id)arg1;
- (void)sendSettingsRPKitGesturesCustomized:(id)arg1 from:(id)arg2;
- (void)unpublishController:(id)arg1;

@end
