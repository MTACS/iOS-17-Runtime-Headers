
@interface PUAssetPickerPrivacyBadge : UIVisualEffectView {
    PUAssetPickerBadgeIconView * _iconView;
    UILabel * _label;
}

@property (nonatomic, readonly) PUAssetPickerBadgeIconView *iconView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelFrame;
@property (nonatomic, readonly) NSString *labelText;

- (void).cxx_destruct;
- (void)flipToPrivacyIconAndDismissAfterDelay:(double)arg1 completion:(id /* block */)arg2;
- (id)iconView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelFont;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (id)labelText;

@end
