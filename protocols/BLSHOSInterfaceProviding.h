
@protocol BLSHOSInterfaceProviding <BLSHOSTimerProviding>

@required

- (<BLSHBacklightSceneHostEnvironment> *)addSceneObserver:(id <BLSHSceneEnvironmentObserving>)arg1 forSceneIdentityToken:(id <NSObject><NSCopying>)arg2;
- (<BLSHFlipbook> *)createFlipbook;
- (<BLSHPreventSystemSleepAsserting> *)createPowerAssertionWithIdentifier:(NSString *)arg1;
- (<BLSHSystemActivityAsserting> *)createSystemActivityAssertionWithIdentifier:(NSString *)arg1;
- (bool)deviceSupportsAlwaysOn;
- (void)didDetectSignificantUserInteraction;
- (void)endSuppressionService;
- (unsigned long long)flipbookDiagnosticHistoryFrameLimit;
- (unsigned long long)flipbookDiagnosticHistoryMemoryLimit;
- (bool)isSuppressionServiceActive;
- (BLSHSuppressionEvent *)lastSuppressionEvent;
- (<BSInvalidatable> *)observeSignificantTimeChangeWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<BLSHBacklightSceneHostEnvironment> *)removeSceneObserver:(id <BLSHSceneEnvironmentObserving>)arg1 forSceneIdentityToken:(id <NSObject><NSCopying>)arg2;
- (<BLSHWatchdogInvalidatable> *)scheduleWatchdogWithDelegate:(id <BLSHWatchdogDelegate>)arg1 explanation:(NSString *)arg2 timeout:(double)arg3;
- (void)startSuppressionServiceWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BLSHSuppressionEvent *, void*
- (<BLSHSystemSleepMonitoring> *)systemSleepMonitor;

@end
