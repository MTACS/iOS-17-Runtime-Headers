
@protocol AFExperimentForSiriVOXSounds <NSObject>

@required

- (void)logExperimentExposureForSiriVOXSounds;
- (bool)playsSessionInactiveSoundForSiriVOXSounds;
- (bool)playsTwoShotSoundForSiriVOXSounds;

@end
