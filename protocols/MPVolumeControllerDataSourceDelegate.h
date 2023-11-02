
@protocol MPVolumeControllerDataSourceDelegate <NSObject>

@required

- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeMuted:(bool)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolume:(float)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeAudioCategory:(NSString *)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeCapabilities:(unsigned int)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeControlAvailability:(bool)arg2;

@optional

- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeEUVolumeLimit:(float)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeEUVolumeLimitEnforced:(bool)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolume:(float)arg2 silenceVolumeHUD:(bool)arg3;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeLabel:(NSString *)arg2;
- (void)volumeControllerDataSource:(id <MPVolumeControllerDataSource>)arg1 didChangeVolumeWarning:(long long)arg2;

@end
