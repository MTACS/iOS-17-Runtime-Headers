
@interface MRUAmbientCompactNowPlayingView : UIView {
    MRUWaveformView * _waveformView;
}

@property (nonatomic, readonly) MRUWaveformView *waveformView;

- (void).cxx_destruct;
- (id)initWithWaveformView:(id)arg1;
- (void)layoutSubviews;
- (id)waveformView;

@end
