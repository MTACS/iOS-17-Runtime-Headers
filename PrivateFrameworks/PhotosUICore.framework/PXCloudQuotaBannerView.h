
@interface PXCloudQuotaBannerView : PXCloudQuotaView {
    ICQBannerView * _bannerView;
}

@property (nonatomic, readonly) UIFont *contentViewFont;

- (void).cxx_destruct;
- (id)contentViewFont;
- (struct CGSize { double x1; double x2; })contentViewSizeForWidth:(double)arg1;
- (id)init;
- (id)initWithBannerView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
