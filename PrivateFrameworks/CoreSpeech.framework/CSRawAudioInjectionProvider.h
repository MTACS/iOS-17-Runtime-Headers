
@interface CSRawAudioInjectionProvider : CSAudioRecorder {
    NSObject<OS_dispatch_source> * _audioFeedTimer;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _fp;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (nonatomic) struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*fp;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (void)createSharedAudioSession;

- (void).cxx_destruct;
- (void)_readAudioBufferAndFeed;
- (bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)alertStartTime;
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;
- (id)audioFeedTimer;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;
- (bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)duckOthersOption;
- (void)enableMiniDucking:(bool)arg1;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(bool)arg2;
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)fp;
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;
- (id)init;
- (bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;
- (bool)isRecordingWithRecordDeviceIndicator:(id)arg1;
- (bool)isSessionCurrentlyActivated;
- (id)metrics;
- (id)observers;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;
- (bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;
- (bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id*)arg3;
- (bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2;
- (id)queue;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;
- (void)registerObserver:(id)arg1;
- (bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(bool)arg3;
- (void)setAudioFeedTimer:(id)arg1;
- (void)setAudioSessionEventDelegate:(id)arg1;
- (void)setContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDuckOthersOption:(bool)arg1;
- (void)setFp:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3;
- (bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id*)arg3;
- (bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id*)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)updateMeters;

@end
