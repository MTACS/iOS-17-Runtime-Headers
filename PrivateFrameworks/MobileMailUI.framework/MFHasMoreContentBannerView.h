
@interface MFHasMoreContentBannerView : MFSuggestionBannerView {
    <MFHasMoreContentBannerViewDelegate> * _delegate;
}

@property (nonatomic) <MFHasMoreContentBannerViewDelegate> *delegate;
@property (readonly) NSString *titleString;

+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isPlainText:(bool)arg2 remainingBytes:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_titleControlTapped:(id)arg1;
- (id)actionStringIsDownloading:(bool)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)primaryAction;
- (void)reloadData;
- (void)requestLoad;
- (void)setDelegate:(id)arg1;
- (id)titleString;

@end
