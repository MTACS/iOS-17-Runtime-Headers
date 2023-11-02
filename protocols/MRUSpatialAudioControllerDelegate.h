
@protocol MRUSpatialAudioControllerDelegate <NSObject>

@required

- (void)spatialAudioController:(MRUSpatialAudioController *)arg1 didChangeAvailableSpatialModes:(NSArray *)arg2;
- (void)spatialAudioController:(MRUSpatialAudioController *)arg1 didChangeNowPlayingInfo:(MRUVolumeNowPlayingInfo *)arg2;
- (void)spatialAudioController:(MRUSpatialAudioController *)arg1 didChangeSelectedSpatialMode:(MRUSpatialAudioMode *)arg2;

@end
