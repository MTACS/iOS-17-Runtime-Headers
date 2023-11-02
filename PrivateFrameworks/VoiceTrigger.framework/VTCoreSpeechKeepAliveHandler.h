
@interface VTCoreSpeechKeepAliveHandler : NSObject <VTSiriEnabledMonitorDelegate> {
    int  _activeNotificationToken;
    int  _inactiveNotificationToken;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _speakerStateActivated;
    bool  _voiceTriggerEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)VTSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (bool)_coreSpeechDaemonKeepAlived;
- (void)_disableCoreSpeechDaemonKeepAlive;
- (void)_enableCoreSpeechDaemonKeepAlive;
- (void)_handleSpeakerActivated;
- (void)_handleSpeakerInactivated;
- (void)_voiceTriggerPolicyDisabled;
- (void)_voiceTriggerPolicyEnabled;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)voiceTriggerPolicyDidChange:(bool)arg1;

@end
