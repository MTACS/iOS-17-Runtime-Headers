
@interface CSSmartSiriVolumeManager : NSObject <CSAlarmMonitorDelegate, CSAutomaticVolumeEnabledMonitorDelegate, CSTimerMonitorDelegate, CSVoiceTriggerDelegate, CSVolumeMonitorDelegate> {
    <CSConnectionServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    <CSSmartSiriVolumeProcessor> * _smartSiriVolume;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSConnectionServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <CSSmartSiriVolumeProcessor> *smartSiriVolume;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSAutomaticVolumeEnabledMonitor:(id)arg1 didReceiveEnabled:(bool)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (id)delegate;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;
- (id)initWithSamplingRate:(float)arg1;
- (id)queue;
- (void)setAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPermanentVolumeOffsetWithDirection:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSmartSiriVolume:(id)arg1;
- (void)setSmartSiriVolumeDirection:(bool)arg1;
- (void)setSmartSiriVolumePercentage:(float)arg1;
- (id)smartSiriVolume;
- (void)startSmartSiriVolume;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;

@end
