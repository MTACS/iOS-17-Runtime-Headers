
@interface PXGAssetDecorationView : UIView <PXGReusableView> {
    UIActivityIndicatorView * _activityIndicatorView;
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
    NSTimer * _progressIndicatorDelayTimer;
    PXRoundProgressView * _progressIndicatorView;
    PXUpdater * _updater;
    PXGAssetDecorationViewConfiguration * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) PXGAssetDecorationViewConfiguration *userData;

+ (bool)_wantsActivityIndicatorForConfiguration:(id)arg1;
+ (bool)_wantsProgressIndicatorForConfiguration:(id)arg1;
+ (bool)wantsDecorationViewForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidateProgressIndicator;
- (void)_setNeedsUpdate;
- (void)_updateProgressIndicator;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
