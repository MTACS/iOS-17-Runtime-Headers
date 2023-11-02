
@protocol MRUVolumeControllerDelegate <MPVolumeControllerDelegate>

@optional

- (void)volumeControllerDidFinishEqualization:(MRUVolumeController *)arg1;
- (void)volumeControllerWillBeginEqualization:(MRUVolumeController *)arg1;

@end
