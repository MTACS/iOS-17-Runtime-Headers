
@interface SVXPowerLevelListener : NSObject <AFAudioPowerProviding> {
    AFAudioPowerUpdater * _outputAudioPowerUpdater;
    NSObject<OS_dispatch_queue> * _outputAudioPowerUpdaterQueue;
    SiriTTSDaemonSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_frequency;
- (void)beginListeningToTTSSession:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)didEndAccessPower;
- (void)endListening;
- (bool)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2;
- (void)willBeginAccessPower;

@end
