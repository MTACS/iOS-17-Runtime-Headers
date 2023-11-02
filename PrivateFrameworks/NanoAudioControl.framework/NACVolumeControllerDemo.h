
@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {
    bool  _allowUserToExceedEUVolumeLimit;
    NSString * _audioCategory;
    NSString * _currentListeningMode;
    NACEventThrottler * _defaultsThrottler;
    <NACVolumeControllerDelegate> * _delegate;
    float  _hapticIntensity;
    long long  _hapticState;
    bool  _observingListeningModes;
    bool  _prominentHapticEnabled;
    bool  _systemMuted;
    NSNumber * _volumeValue;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, readonly) NSOrderedSet *availableListeningModes;
@property (nonatomic, retain) NSString *currentListeningMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (nonatomic) long long hapticState;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (getter=isProminentHapticEnabled, nonatomic) bool prominentHapticEnabled;
@property (readonly) Class superclass;
@property (getter=isSystemMuted, nonatomic) bool systemMuted;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic, readonly) bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_persistVolumeValue:(id)arg1;
- (void)_setNeedsVolumeReload;
- (id)_volumeDictionary;
- (void)allowUserToExceedEUVolumeLimit;
- (id)availableListeningModes;
- (void)beginObservingListeningModes;
- (void)beginObservingVolume;
- (id)currentListeningMode;
- (void)dealloc;
- (id)delegate;
- (void)endObservingListeningModes;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (long long)hapticState;
- (id)init;
- (id)initWithAudioCategory:(id)arg1;
- (bool)isMuted;
- (bool)isProminentHapticEnabled;
- (bool)isSystemMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (void)setCurrentListeningMode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeValue:(float)arg1 muted:(bool)arg2 overrideEULimit:(bool)arg3;
- (float)volumeValue;
- (long long)volumeWarningState;

@end
