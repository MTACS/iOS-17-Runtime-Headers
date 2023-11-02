
@interface PXMessagesDebugTapbackView : UIView <PXGReusableView> {
    double  _desiredAlpha;
    UIImageView * _heartImageView;
    bool  _isAnimating;
    long long  _reuseCounter;
    PXMessagesDebugTapbackUserData * _userData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  clippingRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic) double desiredAlpha;
@property (nonatomic) bool isAnimating;
@property (nonatomic) long long reuseCounter;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, copy) <NSCopying> *userData;

- (void).cxx_destruct;
- (void)_bounce;
- (void)_updateFinalAlpha;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (double)desiredAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (long long)reuseCounter;
- (void)setAlpha:(double)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDesiredAlpha:(double)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setReuseCounter:(long long)arg1;
- (void)setUserData:(id)arg1;
- (bool)shouldReloadForUserData:(id)arg1;
- (bool)shouldReuseWhenInvisible;
- (id)userData;

@end
