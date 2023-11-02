
@interface SiriUISashView : UIView {
    UIButton * _backNavigationButton;
    UIView * _contentView;
    UIImageView * _imageView;
    bool  _navigating;
    bool  _requestsExtraPadding;
    SiriUISashItem * _sashItem;
    SiriUITextContainerView * _textContainerView;
    UIVisualEffectView * _vibrantButtonBackgroundView;
    UIVisualEffectView * _vibrantTextBackgroundView;
}

@property (nonatomic, readonly) UIButton *backNavigationButton;
@property (getter=isNavigating, nonatomic) bool navigating;
@property (nonatomic, readonly) SiriUISashItem *sashItem;

+ (id)_font;
+ (struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })_textContainerStyleForSashItem:(id)arg1;

- (void).cxx_destruct;
- (void)_setupBackNavigationButton;
- (id)backNavigationButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isNavigating;
- (void)layoutSubviews;
- (id)sashItem;
- (void)setNavigating:(bool)arg1;
- (void)setSashItem:(id)arg1 locale:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
