
@interface MFLoadFailedProxyContentBannerView : MFSuggestionBannerView {
    <MFLoadFailedProxyContentBannerViewDelegate> * _delegate;
}

@property (nonatomic) <MFLoadFailedProxyContentBannerViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_dismissed:(id)arg1;
- (void)_titleControlTapped:(id)arg1;
- (id)delegate;
- (void)dismissAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 failureReason:(long long)arg2;
- (void)primaryAction;
- (void)setDelegate:(id)arg1;

@end
