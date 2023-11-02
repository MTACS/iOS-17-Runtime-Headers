
@interface MPCPlayerItemConfigurator : NSObject <MPAVRoutingControllerDelegate, MPCPlaybackEngineEventObserving> {
    MPCAudioAssetTypeSelector * _audioAssetTypeSelector;
    MPCPlayerAudioRoute * _currentAudioRoute;
    MPPlaybackEQSetting * _eqSetting;
    MPCPlaybackEngine * _playbackEngine;
    MPAVRoutingController * _routingController;
    <MFPlaybackStackController><MFQueueManagement> * _stackController;
    MPCMediaFoundationTranslator * _translator;
    NSObject<OS_dispatch_source> * _userDefaultsDebouncer;
}

@property (nonatomic, readonly) MPCAudioAssetTypeSelector *audioAssetTypeSelector;
@property (nonatomic, readonly) MPCPlayerAudioRoute *currentAudioRoute;
@property (nonatomic, readonly) MPCModelGenericAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPPlaybackEQSetting *eqSetting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (nonatomic, readonly) <MFPlaybackStackController><MFQueueManagement> *stackController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPCMediaFoundationTranslator *translator;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *userDefaultsDebouncer;

- (void).cxx_destruct;
- (id)_HLSMetadataForAsset:(id)arg1 error:(id*)arg2;
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)arg1;
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)arg1 metadataWaitTime:(double*)arg2 error:(id*)arg3;
- (void)_emitAudioFormatSelection:(id)arg1 item:(id)arg2;
- (void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1;
- (id)_modeObjectForPlayerItem:(id)arg1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1;
- (void)_preferredResolutionDidChange:(id)arg1;
- (void)_resetBufferedAudio;
- (void)_setupNotifications;
- (void)_setupPlayer;
- (bool)_setupQueueItemForEnhancedAudioHLSPlayback:(id)arg1 metadataWaitTime:(double*)arg2 error:(id*)arg3;
- (void)_setupQueueItemForLossyAudioPlayback:(id)arg1;
- (void)_setupRoutingController;
- (bool)_shouldReloadEntireQueue;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)arg1 route:(id)arg2;
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;
- (id)audioAssetTypeSelector;
- (bool)configureQueuePlayerItem:(id)arg1 error:(id*)arg2;
- (id)currentAudioRoute;
- (id)currentItem;
- (void)dealloc;
- (void)engineDidChangeVocalAttenuationLevel:(id)arg1;
- (void)engineDidChangeVocalAttenuationState:(id)arg1;
- (id)eqSetting;
- (id)initWithPlaybackEngine:(id)arg1 stackController:(id)arg2 translator:(id)arg3;
- (id)playbackEngine;
- (void)processAudioQualityChanges;
- (id)queuedItems;
- (id)routingController;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
- (void)setEqSetting:(id)arg1;
- (void)setUserDefaultsDebouncer:(id)arg1;
- (void)setupDefaultsDebouncer;
- (id)stackController;
- (void)tearDownDefaultsDebouncer;
- (id)translator;
- (void)updateCurrentAudioRouteWithPickedRoutes:(id)arg1;
- (void)updatePlayerConfiguration;
- (id)userDefaultsDebouncer;

@end
