
@interface NFMPlayCommands : NSObject {
    AVQueuePlayer * _avQueuePlayer;
    long long  _flashCount;
    bool  _flashEnabled;
    NSTimer * _flashScheduler;
}

@property (nonatomic, retain) AVQueuePlayer *avQueuePlayer;
@property (nonatomic) long long flashCount;
@property (nonatomic) bool flashEnabled;
@property (nonatomic, retain) NSTimer *flashScheduler;

- (void).cxx_destruct;
- (bool)_isDeviceLocked;
- (bool)_isFaceTimeOrCameraFrontmost;
- (bool)_isInFaceTimeCall;
- (bool)_isInternalInstall;
- (bool)_playSoundAtPath:(id)arg1;
- (id)avQueuePlayer;
- (void)beginObservingTUChanges;
- (void)cancelAllAlerts:(id)arg1;
- (void)dealloc;
- (long long)flashCount;
- (bool)flashEnabled;
- (void)flashLED;
- (bool)flashLEDIfAppropriate;
- (bool)flashLights;
- (id)flashScheduler;
- (id)init;
- (bool)playFindLocallySound;
- (void)playNearbySound;
- (bool)playSoundAndFlash;
- (void)playbackStateChanged:(id)arg1;
- (void)setAvQueuePlayer:(id)arg1;
- (void)setFlashCount:(long long)arg1;
- (void)setFlashEnabled:(bool)arg1;
- (void)setFlashScheduler:(id)arg1;
- (void)updateFlashState;

@end
