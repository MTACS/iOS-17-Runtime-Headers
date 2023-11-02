
@interface ANVolumeController : NSObject

+ (id)sharedController;

- (void)setVolumeWithOptions:(unsigned long long)arg1;
- (float)smartSiriVolume;

@end
