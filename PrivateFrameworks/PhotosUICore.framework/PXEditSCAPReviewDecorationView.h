
@interface PXEditSCAPReviewDecorationView : UIView <PXGDecorationView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clippingRect;
    unsigned long long  _decorationOptions;
    PXTextBannerView * _textBannerView;
    PXAssetReference * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic) unsigned long long decorationOptions;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, retain) PXTextBannerView *textBannerView;
@property (nonatomic, copy) PXAssetReference *userData;

- (void).cxx_destruct;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (unsigned long long)decorationOptions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDecorationOptions:(unsigned long long)arg1;
- (void)setTextBannerView:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)textBannerView;
- (void)updateBanner;
- (id)userData;

@end
