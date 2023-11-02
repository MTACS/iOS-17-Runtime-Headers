
@interface CSVoiceTriggerJarvisAPEnabledPolicy : CSPolicy <CSSiriClientBehaviorMonitorDelegate> {
    NSString * _clientRecordRoute;
    bool  _isPlaybackAudioSessionActive;
}

@property (nonatomic, retain) NSString *clientRecordRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPlaybackAudioSessionActive;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (void)_subscribeEventMonitors;
- (id)clientRecordRoute;
- (id)init;
- (bool)isPlaybackAudioSessionActive;
- (void)setClientRecordRoute:(id)arg1;
- (void)setIsPlaybackAudioSessionActive:(bool)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 activatedAudioSessionWithReason:(unsigned long long)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;
- (void)siriClientBehaviorMonitorAudioDeviceInfoUpdated:(id)arg1;
- (void)siriClientBehaviorMonitorReleasedAudioSession:(id)arg1;

@end
