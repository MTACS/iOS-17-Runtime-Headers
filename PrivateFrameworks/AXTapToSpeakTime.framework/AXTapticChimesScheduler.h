
@interface AXTapticChimesScheduler : NSObject <AVAudioPlayerDelegate> {
    unsigned int  _audioPlaybackPowerAssertionID;
    AVAudioPlayer * _audioPlayer;
    PCSimpleTimer * _chimeTimer;
    AXTapticChimeAsset * _currentChimeAsset;
    NSDate * _lastActualChimeTime;
    NSDate * _lastActualWakeTime;
    NSDate * _lastExpectedChimeTime;
    NSDate * _lastExpectedWakeTime;
    float  _lastMediaVolume;
    NSObject<OS_dispatch_queue> * _mediaQueue;
    NSString * _pcServiceIdentifier;
    NSString * _previousAudioSessionCategory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float lastMediaVolume;
@property (readonly) Class superclass;

+ (void)initializeIfNeeded;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_chimeDidFinishPlaying;
- (void)_chimeWakeTimerFired:(id)arg1;
- (void)_clearChimeTimer;
- (unsigned int)_createPowerAssertionWithName:(id)arg1 timeout:(double)arg2;
- (id)_currentDate;
- (void)_denormalizeVolumeIfNecessary;
- (id)_init;
- (void)_normalizeVolumeIfNecessary;
- (bool)_outputTapticChime:(id)arg1 atDate:(id)arg2;
- (double)_prePlayAudioTimeInterval;
- (double)_preWakeTimeInterval;
- (void)_previewChimes;
- (void)_previewChimesForStartDate:(id)arg1 chimeDate:(id)arg2 frequency:(long long)arg3 soundType:(long long)arg4;
- (void)_registerForNotifications;
- (void)_releasePowerAssertionIfPossible:(unsigned int)arg1;
- (void)_scheduleChimeTimer;
- (void)_tapticChimesStateDidChange:(bool)arg1;
- (void)_unregisterForNotifications;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (bool)canPlayScheduledTapticChime;
- (bool)canPlayTapticChime;
- (bool)canScheduleTapticChimes;
- (void)dealloc;
- (float)lastMediaVolume;
- (id)nextChimeAssetForStartDate:(id)arg1 frequency:(long long)arg2 soundType:(long long)arg3 timeIntervalUntilChime:(double*)arg4;
- (bool)processIsAllowedToInterfaceWithNanoMediaRemote;
- (bool)processIsAllowedToScheduleChimes;
- (void)setLastMediaVolume:(float)arg1;

@end
