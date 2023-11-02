
@protocol BWPortraitSceneMonitor <NSObject>

@required

- (float)focusDistanceToMaxAllowedFocusDistanceRatio;
- (void)focusScanDidComplete;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatisticsByPortType:(BWFrameStatisticsByPortType *)arg2 sceneFlags:(unsigned long long)arg3 flashOrTorchWillBeActive:(bool)arg4 digitalFlashWillFire:(bool)arg5 thermalPressureLevel:(int)arg6 peakPowerPressureLevel:(int)arg7 effectStatus:(int*)arg8 stagePreviewStatus:(int*)arg9;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(NSArray *)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(NSArray *)arg8;

@end
