
@interface SVAudioSession : NSObject {
    AVAudioSession * _audioSession;
    bool  _audioSessionActive;
    SVMediaPlaybackController * _playbackController;
    NSMapTable * _players;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (getter=isAudioSessionActive, nonatomic) bool audioSessionActive;
@property (nonatomic, readonly) SVMediaPlaybackController *playbackController;
@property (nonatomic, readonly) NSMapTable *players;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)sharedSession;
+ (id)sharedSessionForMode:(int)arg1;
+ (id)sharedSilentSession;

- (void).cxx_destruct;
- (void)activateAudioSessionCategory;
- (void)addInterestForPlayer:(id)arg1 withMode:(int)arg2;
- (id)audioSession;
- (bool)canDeactivateAudioSession;
- (void)deactivateAudioSessionCategory;
- (id)desiredAudioSessionConfiguration;
- (id)initWithAudioSession:(id)arg1;
- (bool)isAudioSessionActive;
- (bool)needsToSetupAudioSessionCategory;
- (id)playbackController;
- (id)players;
- (void)registerPlaybackControlForPlayer:(id)arg1 withMode:(int)arg2;
- (void)removeInterestForPlayer:(id)arg1;
- (id)semaphore;
- (void)setAudioSessionActive:(bool)arg1;
- (void)setupAudioSessionCategory;
- (bool)shouldActivateAudioSession;

@end
