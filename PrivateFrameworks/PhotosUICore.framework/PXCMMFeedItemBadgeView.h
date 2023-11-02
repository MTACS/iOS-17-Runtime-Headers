
@interface PXCMMFeedItemBadgeView : UIView <PXGReusableView> {
    UIVisualEffectView * _backgroundEffectView;
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
    PXCMMFeedItemBadgeViewConfiguration * _configuration;
    UIVisualEffectView * _labelVibrancyEffectView;
    UILabel * _titleLabel;
    <NSCopying> * _userData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, copy) PXCMMFeedItemBadgeViewConfiguration *configuration;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) <NSCopying> *userData;

+ (id)_titleFont;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 configuration:(id)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)configuration;
- (id)init;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setUserData:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)userData;

@end
