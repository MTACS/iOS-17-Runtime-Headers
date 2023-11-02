
@protocol PHASESessionVolumeInterface <NSObject>

@required

- (bool)registerVolumeChangedNotificationBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, PHASEVolumeCommand *, void*
- (PHASESessionVolume *)volumeForCommand:(PHASEVolumeCommand *)arg1;
- (PHASESessionVolume *)volumeForCommandFromCallback:(PHASEVolumeCommand *)arg1;

@end
