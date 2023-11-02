
@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal * _playerItemTrack;
}

@property (nonatomic, readonly) AVAssetTrack *assetTrack;
@property (readonly) float currentVideoFrameRate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSArray *outputs;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;

- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (bool)_figPlaybackItemIsReadyForInspection;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferEnabledToFig;
- (void)_transferHapticVolumeToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferMutesHapticsToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_updateTrackExtractionIDArrayProperty;
- (id)_weakReferenceToPlayerItem;
- (long long)activeHapticChannelIndex;
- (void)addOutput:(id)arg1;
- (id)assetTrack;
- (float)currentVideoFrameRate;
- (void)dealloc;
- (id)description;
- (bool)disableColorMatching;
- (int)effectiveEQPreset;
- (id)effectiveLoudnessInfo;
- (id)fallbackTrack;
- (float)hapticVolume;
- (unsigned long long)hash;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)loudnessInfo;
- (bool)mutesHaptics;
- (id)outputs;
- (void)removeOutput:(id)arg1;
- (void)setActiveHapticChannelIndex:(long long)arg1;
- (void)setDisableColorMatching:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHapticVolume:(float)arg1;
- (void)setLoudnessInfo:(id)arg1;
- (void)setMutesHaptics:(bool)arg1;
- (void)setVideoEnhancementFilterOptions:(id)arg1;
- (int)trackID;
- (id)videoEnhancementFilterOptions;
- (bool)willTrimShortDurationAudioSamples;

@end
