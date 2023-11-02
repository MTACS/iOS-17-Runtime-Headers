
@interface CSVoiceTriggerEventsCoordinator : NSObject <CSAudioRouteChangeMonitorDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSVoiceTriggerDelegate> {
    bool  _hasStarted;
    bool  _isHearstOwned;
    bool  _isHearstRouted;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _splitterState;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;
- (void)CSBluetoothWirelessSplitterMonitor:(id)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg3;
- (id)_createVoiceTriggerEventInfoString:(id)arg1;
- (bool)_isVoiceTriggerFromHearst:(id)arg1;
- (bool)_isVoiceTriggerFromRemora:(id)arg1;
- (id)_myriadPhashFromVoiceTriggerInfo:(id)arg1;
- (void)_notifyKeywordDetect;
- (void)_notifyKeywordReject:(id)arg1 deviceId:(id)arg2;
- (void)_notifyNearMissEvent:(id)arg1 deviceId:(id)arg2;
- (void)_notifyRaiseToSpeakTriggerEvent:(id)arg1;
- (void)_notifyRemoteTriggerEvent:(id)arg1 myriadHash:(id)arg2 remoteTriggerType:(unsigned long long)arg3 remoteDeviceId:(id)arg4 isTriggeredFromFullWake:(bool)arg5 completion:(id /* block */)arg6;
- (void)_notifySpeakerReject:(id)arg1;
- (void)_notifySuperVector:(id)arg1;
- (void)_notifyTriggerEvent:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)_notifyWakeKeywordSpokenEvent:(id)arg1 deviceId:(id)arg2;
- (void)_printVoiceTriggerMetricsString:(id)arg1;
- (bool)_shouldIgnoreVoiceTriggerEvent:(id)arg1;
- (id)init;
- (void)keywordDetectorDidDetectKeyword;
- (void)raiseToSpeakDetected:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)start;
- (void)unregisterObserver:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 myriadHash:(id)arg2 remoteTriggerType:(unsigned long long)arg3 remoteDeviceId:(id)arg4 isTriggeredFromFullWake:(bool)arg5 completion:(id /* block */)arg6;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidRejected:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerGotSuperVector:(id)arg1;

@end
