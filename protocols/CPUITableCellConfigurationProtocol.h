
@protocol CPUITableCellConfigurationProtocol <NSObject>

@optional

- (CPUITableCellAccessory *)accessory;
- (bool)currentlyPlaying;
- (NSString *)detailText;
- (bool)enabled;
- (UIImage *)image;
- (double)playbackProgress;
- (long long)playbackState;
- (bool)playingIndicatorLeadingSide;
- (bool)shouldShowPlaybackProgress;
- (bool)showActivityIndicator;
- (bool)showExplicit;
- (NSString *)text;

@end
