
@interface MRUNowPlayingHeaderView : UIView {
    MRUNowPlayingLabelView * _labelView;
    long long  _layout;
    MRUTransportButton * _routingButton;
    bool  _showRoutingButton;
    bool  _showTransportButton;
    bool  _showWaveform;
    MRUVisualStylingProvider * _stylingProvider;
    long long  _textAlignment;
    double  _textCenterOffsetY;
    MRUTransportButton * _transportButton;
    MRUWaveformView * _waveformView;
}

@property (nonatomic, readonly) MRUNowPlayingLabelView *labelView;
@property (nonatomic) long long layout;
@property (nonatomic, readonly) MRUTransportButton *routingButton;
@property (nonatomic) bool showRoutingButton;
@property (nonatomic) bool showTransportButton;
@property (nonatomic) bool showWaveform;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textCenterOffsetY;
@property (nonatomic, readonly) MRUTransportButton *transportButton;
@property (nonatomic, retain) MRUWaveformView *waveformView;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWaveformView:(id)arg1;
- (id)labelView;
- (long long)layout;
- (void)layoutSubviews;
- (id)routingButton;
- (void)setLayout:(long long)arg1;
- (void)setShowRoutingButton:(bool)arg1;
- (void)setShowTransportButton:(bool)arg1;
- (void)setShowWaveform:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextCenterOffsetY:(double)arg1;
- (void)setWaveformView:(id)arg1;
- (bool)showRoutingButton;
- (bool)showTransportButton;
- (bool)showWaveform;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (long long)textAlignment;
- (double)textCenterOffsetY;
- (id)transportButton;
- (void)updateVisibility;
- (id)waveformView;

@end
