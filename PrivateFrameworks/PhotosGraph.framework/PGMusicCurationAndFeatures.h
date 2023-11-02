
@interface PGMusicCurationAndFeatures : NSObject {
    PGMusicCuration * _appleMusicCuration;
    PGMusicCurationFeatures * _features;
    PGFlexMusicCuration * _flexMusicCuration;
}

@property (readonly) PGMusicCuration *appleMusicCuration;
@property (readonly) PGMusicCurationFeatures *features;
@property (readonly) PGFlexMusicCuration *flexMusicCuration;

- (void).cxx_destruct;
- (id)appleMusicCuration;
- (id)features;
- (id)flexMusicCuration;
- (id)initWithAppleMusicCuration:(id)arg1 features:(id)arg2;
- (id)initWithFlexMusicCuration:(id)arg1 features:(id)arg2;

@end
