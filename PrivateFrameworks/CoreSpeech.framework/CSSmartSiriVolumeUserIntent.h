
@interface CSSmartSiriVolumeUserIntent : NSObject {
    float  _latestVolume;
    long long  _latestVolumeTime;
    float  _permanentOffsetFactor;
    bool  _permanentOffsetIsEnabled;
    long long  _userIntentTime;
    unsigned long long  _userIntentType;
    unsigned long long  _userIntentValidForSeconds;
    float  _userIntentVolume;
    float  kSSVCAUserIntentPermanentOffsetFactorDelta;
    float  kSSVCAUserIntentPermanentOffsetFactorLowerBound;
    float  kSSVCAUserIntentPermanentOffsetFactorUpperBound;
    unsigned long long  kSSVCAUserIntentValidForSeconds;
    float  kSSVCAUserIntentVolumeDecreaseFactor;
    float  kSSVCAUserIntentVolumeIncreaseFactor;
    float  kSSVCA_DEVICE_DEFAULT_MAX_TTS_VOLUME;
    float  kSSVCA_DEVICE_DEFAULT_MIN_TTS_VOLUME;
    float  kSSVCA_DEVICE_SIMPLE_MAX_TTS_VOLUME;
    float  kSSVCA_DEVICE_SIMPLE_MIN_TTS_VOLUME;
}

@property (nonatomic) float latestVolume;
@property (nonatomic) long long latestVolumeTime;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) bool permanentOffsetIsEnabled;
@property (nonatomic) long long userIntentTime;
@property (nonatomic) unsigned long long userIntentType;
@property (nonatomic) unsigned long long userIntentValidForSeconds;
@property (nonatomic) float userIntentVolume;

- (double)applyLowerAndUpperBoundsToVolume:(float)arg1;
- (double)applyLowerAndUpperBoundsToVolumeOffset:(float)arg1;
- (float)decreaseSiriVolumeBasedOnUserIntent;
- (float)increaseSiriVolumeBasedOnUserIntent;
- (void)initWithStoredInformationAndAsset:(id)arg1;
- (float)latestVolume;
- (long long)latestVolumeTime;
- (float)permanentOffsetFactor;
- (bool)permanentOffsetIsEnabled;
- (void)setLatestVolume:(float)arg1;
- (void)setLatestVolumeTime:(long long)arg1;
- (void)setPermanentOffsetFactor:(float)arg1;
- (void)setPermanentOffsetIsEnabled:(bool)arg1;
- (void)setUserIntentTime:(long long)arg1;
- (void)setUserIntentType:(unsigned long long)arg1;
- (void)setUserIntentValidForSeconds:(unsigned long long)arg1;
- (void)setUserIntentVolume:(float)arg1;
- (void)storeASVStateInformation;
- (long long)userIntentTime;
- (unsigned long long)userIntentType;
- (unsigned long long)userIntentValidForSeconds;
- (float)userIntentVolume;

@end
