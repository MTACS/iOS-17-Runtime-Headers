
@interface MPCAudioAssetTypeSelector : NSObject {
    MPPlaybackUserDefaults * _defaults;
    ICEnvironmentMonitor * _environmentMonitor;
    MSVABTestGenerator * _outcomeGenerator;
    MPCPlaybackEngine * _playbackEngine;
    MSVTrialExperiment * _trialExperiment;
}

@property (nonatomic, retain) MPPlaybackUserDefaults *defaults;
@property (nonatomic, retain) ICEnvironmentMonitor *environmentMonitor;
@property (nonatomic, readonly) bool networkBandwidthIsHigh;
@property (nonatomic, readonly) MSVABTestGenerator *outcomeGenerator;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) bool prefersHighQualityStereo;
@property (nonatomic, readonly) bool prefersHighResolutionLossless;
@property (nonatomic, readonly) bool prefersLossless;
@property (nonatomic, readonly) bool prefersLowQualityStereo;
@property (nonatomic, readonly) bool prefersSpatialOverLossless;
@property (nonatomic, readonly) bool spatialIsAlwaysOn;
@property (nonatomic, readonly) bool spatialIsAutomatic;
@property (nonatomic, readonly) bool spatialIsOff;
@property (nonatomic, retain) MSVTrialExperiment *trialExperiment;

- (void).cxx_destruct;
- (id)audioFormatMatchingAudioAssetType:(long long)arg1 formats:(id)arg2 route:(id)arg3;
- (unsigned long long)audioFormatPreference;
- (id)defaults;
- (id)description;
- (id)descriptionForTiers:(unsigned long long)arg1;
- (id)descriptionForTraits:(unsigned long long)arg1;
- (id)environmentDescription;
- (id)environmentMonitor;
- (id)experimentDescription;
- (void)handleExperimentDidReceiveUpdateNotification:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1 userDefaults:(id)arg2 environmentMonitor:(id)arg3;
- (bool)networkBandwidthIsHigh;
- (long long)nextAssetTypeOutcomeWithIsStartItem:(bool)arg1;
- (id)outcomeGenerator;
- (id)playbackEngine;
- (id)preferencesDescription;
- (id)preferredAudioAssetTypeForItem:(id)arg1;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)arg1 isStartItem:(bool)arg2;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)arg1 isStartItem:(bool)arg2 supportsVocalAttenuation:(bool)arg3;
- (id)preferredAudioFormatForAudioFormats:(id)arg1 route:(id)arg2;
- (id)preferredPlayerAudioFormatForItem:(id)arg1 route:(id)arg2;
- (bool)prefersHighQualityStereo;
- (bool)prefersHighResolutionLossless;
- (bool)prefersLossless;
- (bool)prefersLowQualityStereo;
- (bool)prefersSpatialOverLossless;
- (bool)prefersSpatialOverStereo:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setEnvironmentMonitor:(id)arg1;
- (void)setTrialExperiment:(id)arg1;
- (bool)spatialIsAlwaysOn;
- (bool)spatialIsAutomatic;
- (bool)spatialIsOff;
- (long long)tierMatchingAudioAssetType:(long long)arg1;
- (id)trialExperiment;
- (void)updateOutcomeGenerator;
- (void)updateProbabilityOfProgressiveDownloadAssets:(float)arg1;
- (bool)userPrefersMultichannelAudioOverStereo:(id)arg1;

@end
