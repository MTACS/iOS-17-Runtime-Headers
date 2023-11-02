
@interface MFHideMyEmailBannerView : MFSuggestionBannerView {
    <MFHideMyEmailBannerViewDelegate> * _delegate;
}

@property (nonatomic) <MFHideMyEmailBannerViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)primaryAction;
- (void)setDelegate:(id)arg1;

@end
