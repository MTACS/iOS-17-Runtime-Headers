
@protocol MediaControlsVolumeControllerObserver <NSObject>

@required

- (void)mediaControlsVolumeController:(MediaControlsVolumeController *)arg1 didUpdateSplitRoute:(bool)arg2;

@optional

- (void)mediaControlsVolumeController:(MediaControlsVolumeController *)arg1 didChangeVolumeAvailable:(bool)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;

@end
