
@interface AVNowPlayingInfoController : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    void * _commandHandlerIdentifier;
    bool  _enabled;
    AVObservationController * _keyValueObservationController;
    bool  _nowPlayingInfoNeedsUpdate;
    NSString * _overrideParentApplicationDisplayIdentifier;
    AVPlayerController * _playerController;
    id  _playerControllerCurrentTimeJumpedObserver;
    AVPlayerController * _playerControllerToActivateAfterDelay;
    bool  _requiresLinearPlayback;
    NSTimer * _startNowPlayingUpdatesTimer;
    bool  _suspended;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *overrideParentApplicationDisplayIdentifier;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) AVPlayerController *playerControllerToActivateAfterDelay;
@property (nonatomic) bool requiresLinearPlayback;
@property (nonatomic) NSTimer *startNowPlayingUpdatesTimer;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)_avMediaCharacteristics;
+ (void*)_createMediaRemoteLanguageOptionGroupWithAVMediaSelectionOptions:(id)arg1;
+ (void*)_createMediaRemoteLanguageOptionWithAVMediaSelectionOption:(id)arg1;
+ (id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1;
+ (id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1;
+ (void)sharedNowPlayingInfoControllerWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_availableLanguageOptions;
- (id)_createNowPlayingInfoFromPlaybackInfo:(id)arg1;
- (id)_currentLanguageOptions;
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)_makeCommandsAndStatesDictionaryForPlayerController:(id)arg1;
- (id)_makePlaybackInfoDictionary;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfo:(id)arg1 commandsAndStates:(id)arg2;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithCommandsAndStates:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEnabled;
- (bool)isSuspended;
- (id)overrideParentApplicationDisplayIdentifier;
- (id)playerController;
- (id)playerControllerToActivateAfterDelay;
- (bool)requiresLinearPlayback;
- (void)setEnabled:(bool)arg1;
- (void)setOverrideParentApplicationDisplayIdentifier:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerControllerToActivateAfterDelay:(id)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setStartNowPlayingUpdatesTimer:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)startNowPlayingUpdatesForPlayerController:(id)arg1 afterDelay:(double)arg2;
- (id)startNowPlayingUpdatesTimer;
- (void)stopNowPlayingUpdatesForPlayerController:(id)arg1;

@end
