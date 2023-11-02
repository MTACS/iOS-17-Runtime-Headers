
@interface NCBadgedIconView : UIView {
    id /* block */  _badgeLayoutBlock;
    NSArray * _badgeViews;
    UIView * _iconView;
    double  _iconViewCornerRadius;
}

@property (nonatomic, copy) id /* block */ badgeLayoutBlock;
@property (nonatomic, retain) NSArray *badgeViews;
@property (nonatomic, retain) UIView *iconView;
@property (nonatomic) double iconViewCornerRadius;
@property (nonatomic, readonly) UIView<NCIntegerIndicatorBadging> *integerIndicatorbadgeView;

+ (unsigned long long)_defaultDirectionForBadgeType:(long long)arg1;
+ (id)brandingBadgeWithImage:(id)arg1;
+ (id)integerIndicatorBadgeWithCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForBadgeView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForBrandingBadgeOfSize:(struct CGSize { double x1; double x2; })arg1 withLocation:(unsigned long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForBrandingBadgeView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndicatorBadgeOfSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2 withLocation:(unsigned long long)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndicatorBadgeView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id /* block */)badgeLayoutBlock;
- (id)badgeViews;
- (id)iconView;
- (double)iconViewCornerRadius;
- (id)initWithIconView:(id)arg1;
- (id)initWithIconView:(id)arg1 andIntegerIndicatorBadgeWithCount:(unsigned long long)arg2;
- (id)integerIndicatorbadgeView;
- (void)layoutSubviews;
- (id)requiredVisualStyleCategories;
- (void)setBadgeLayoutBlock:(id /* block */)arg1;
- (void)setBadgeViews:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setIconViewCornerRadius:(double)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;

@end
