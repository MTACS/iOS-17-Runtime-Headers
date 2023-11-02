
@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSIntuitiveConvAudioCaptureMonitorDelegate, CSSiriClientBehaviorMonitorDelegate> {
    bool  _isSiriClientConsideredAsRecord;
    NSString * _pendingRecordingStopUUID;
    NSObject<OS_dispatch_queue> * _recordStateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSiriClientConsideredAsRecord;
@property (nonatomic, retain) NSString *pendingRecordingStopUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConditionsForIOSAOP;
- (void)_addConditionsForIOSBargeIn;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)_handleClientRecordStateDidChange:(bool)arg1 eventUUID:(id)arg2;
- (bool)_isAudioRouteIneligibleForAP;
- (bool)_isHearstRoutedAndWithNoPhoneCall;
- (bool)_isInPhoneCallStateWithHSPhoneCallCapableRoute;
- (bool)_isJarvisRouted;
- (bool)_isSpeechDetectionDevicePresent;
- (void)_subscribeEventMonitors;
- (id)init;
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 didStartAudioCaptureSuccessfully:(bool)arg2 option:(id)arg3 eventUUID:(id)arg4;
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)arg1 stopStreamOption:(id)arg2 eventUUID:(id)arg3;
- (bool)isSiriClientConsideredAsRecord;
- (id)pendingRecordingStopUUID;
- (void)setIsSiriClientConsideredAsRecord:(bool)arg1;
- (void)setPendingRecordingStopUUID:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(bool)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;

@end
