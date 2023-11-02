
@interface PXUIOverlayBadgesView : UIView {
    UIImageView * _backgroundView;
    NSDictionary * _badges;
    bool  _isShowingAnyBadge;
    UIStackView * _stackView;
}

@property (nonatomic) UIImageView *backgroundView;
@property (nonatomic, readonly) NSDictionary *badges;
@property (nonatomic) bool isShowingAnyBadge;
@property (nonatomic, readonly) UIStackView *stackView;

+ (id)badgesViewWithDefaultBadgesAndOrder;
+ (id)defaultBadges;
+ (id)defaultOrder;
+ (id)defaultViewForBadge:(long long)arg1;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)badges;
- (id)createWeaklyReferencedBackgroundView;
- (id)init;
- (id)initWithBadges:(id)arg1 order:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingAnyBadge;
- (void)setBackgroundView:(id)arg1;
- (void)setIsShowingAnyBadge:(bool)arg1;
- (void)showBadges:(id)arg1;
- (void)showBadgesForPHAsset:(id)arg1;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;

@end
