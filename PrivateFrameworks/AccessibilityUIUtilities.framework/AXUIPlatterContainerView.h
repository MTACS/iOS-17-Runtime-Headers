
@interface AXUIPlatterContainerView : UIView {
    UIView * _contentView;
    UIBlurEffect * _platterBlurEffect;
    UIView * _platterView;
}

@property (nonatomic, readonly) bool allowsScrolling;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIBlurEffect *platterBlurEffect;
@property (nonatomic, readonly) UIView *platterView;
@property (nonatomic, readonly) double platterWidth;
@property (nonatomic, readonly) NSString *primaryTextStyle;
@property (nonatomic, readonly) bool shouldMimicNotificationBannerTopOffset;

- (void).cxx_destruct;
- (bool)allowsScrolling;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)platterBlurEffect;
- (id)platterView;
- (double)platterWidth;
- (id)primaryTextStyle;
- (bool)shouldMimicNotificationBannerTopOffset;

@end
