
@protocol MRUNowPlayingTransportControlsViewDelegate <NSObject>

@required

- (void)transportControlsView:(MRUNowPlayingTransportControlsView *)arg1 didSelectRoutingButton:(MRUTransportButton *)arg2;
- (void)transportControlsView:(MRUNowPlayingTransportControlsView *)arg1 didSelectTVRemoteButton:(MRUTransportButton *)arg2;

@end
