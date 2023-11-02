
@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) bool comfortSoundsEnabled;
@property (nonatomic) bool forceMixingBehavior;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) double mediaVolume;
@property (nonatomic) bool mixesWithMedia;
@property (nonatomic) double relativeVolume;
@property (nonatomic, retain) HUComfortSound *selectedComfortSound;
@property (nonatomic) bool stopsOnLock;

+ (id)sharedInstance;

- (bool)comfortSoundsAvailable;
- (bool)comfortSoundsEnabled;
- (bool)forceMixingBehavior;
- (id)keysToSync;
- (double)lastEnablementTimestamp;
- (void)logMessage:(id)arg1;
- (double)mediaVolume;
- (bool)mixesWithMedia;
- (id)preferenceDomainForPreferenceKey:(id)arg1;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (double)relativeVolume;
- (void)reset;
- (id)selectedComfortSound;
- (void)setComfortSoundsEnabled:(bool)arg1;
- (void)setForceMixingBehavior:(bool)arg1;
- (void)setLastEnablementTimestamp:(double)arg1;
- (void)setMediaVolume:(double)arg1;
- (void)setMixesWithMedia:(bool)arg1;
- (void)setRelativeVolume:(double)arg1;
- (void)setSelectedComfortSound:(id)arg1;
- (void)setStopsOnLock:(bool)arg1;
- (bool)shouldStoreLocally;
- (bool)stopsOnLock;

@end
