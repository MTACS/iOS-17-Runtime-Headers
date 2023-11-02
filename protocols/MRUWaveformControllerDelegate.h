
@protocol MRUWaveformControllerDelegate <NSObject>

@required

- (void)waveformController:(MRUWaveformController *)arg1 artworkImageDidChange:(UIImage *)arg2;
- (void)waveformController:(MRUWaveformController *)arg1 remoteRouteSymbolNameDidChange:(NSString *)arg2;
- (void)waveformController:(MRUWaveformController *)arg1 waveformDidChange:(MRUWaveformData *)arg2;
- (void)waveformControllerTrackDidChange:(MRUWaveformController *)arg1;

@end
