
@interface PXPeopleBadgeView : UIView <PXGReusableView> {
    <PXPeopleBadgeViewDelegate> * _badgeViewDelegate;
    UIButton * _checkmarkCircle;
    UIImageSymbolConfiguration * _checkmarkConfiguration;
    UIButton * _checkmarkView;
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
    UIColor * _currentTintColor;
    UIButton * _favoriteButton;
    UIImageSymbolConfiguration * _favoriteConfiguration;
    UIImageSymbolConfiguration * _largeConfiguration;
    UIButton * _legacyFavoriteBackground;
    UIButton * _legacyFavoriteButton;
    UIButton * _legacyUnfavoriteButton;
    UIImageSymbolConfiguration * _smallConfiguration;
    UIButton * _unfavoriteButton;
    UIImageSymbolConfiguration * _unfavoriteConfiguration;
    PXPeopleBadgeViewConfiguration * _userData;
}

@property (nonatomic) <PXPeopleBadgeViewDelegate> *badgeViewDelegate;
@property (nonatomic, readonly) UIButton *checkmarkCircle;
@property (nonatomic, readonly) UIImageSymbolConfiguration *checkmarkConfiguration;
@property (nonatomic, readonly) UIButton *checkmarkView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (nonatomic, readonly) UIColor *currentTintColor;
@property (nonatomic, readonly) UIButton *favoriteButton;
@property (nonatomic, readonly) UIImageSymbolConfiguration *favoriteConfiguration;
@property (nonatomic, readonly) UIImageSymbolConfiguration *largeConfiguration;
@property (nonatomic, readonly) UIButton *legacyFavoriteBackground;
@property (nonatomic, readonly) UIButton *legacyFavoriteButton;
@property (nonatomic, readonly) UIButton *legacyUnfavoriteButton;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (nonatomic, readonly) UIImageSymbolConfiguration *smallConfiguration;
@property (nonatomic, readonly) UIButton *unfavoriteButton;
@property (nonatomic, readonly) UIImageSymbolConfiguration *unfavoriteConfiguration;
@property (nonatomic, copy) PXPeopleBadgeViewConfiguration *userData;

- (void).cxx_destruct;
- (id)_checkmarkConfiguration;
- (void)_createCheckmarkBadgeWithDisplayScale:(double)arg1;
- (void)_createFavoriteBadgeWithDisplayScale:(double)arg1;
- (id)_createHeartBadgeWithDisplayScale:(double)arg1 isFavorite:(bool)arg2;
- (void)_createLegacyDisabledFavoriteBadgeWithDisplayScale:(double)arg1;
- (void)_createLegacyDisabledUnfavoriteBadgeWithDisplayScale:(double)arg1;
- (void)_createLegacyEnabledFavoriteBadgeWithDisplayScale:(double)arg1;
- (void)_createLegacyEnabledUnfavoriteBadgeWithDisplayScale:(double)arg1;
- (void)_createUnfavoriteBadgeWithDisplayScale:(double)arg1;
- (id)_currentTintColor;
- (id)_favoriteConfiguration;
- (void)_hideAllViews;
- (id)_largeConfiguration;
- (id)_smallConfiguration;
- (id)_unfavoriteConfiguration;
- (id)badgeViewDelegate;
- (void)becomeReusable;
- (id)checkmarkCircle;
- (id)checkmarkConfiguration;
- (id)checkmarkView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (id)currentTintColor;
- (id)favoriteButton;
- (id)favoriteConfiguration;
- (void)favoriteTapped:(id)arg1;
- (id)largeConfiguration;
- (void)layoutSubviews;
- (id)legacyFavoriteBackground;
- (id)legacyFavoriteButton;
- (id)legacyUnfavoriteButton;
- (void)prepareForReuse;
- (void)setBadgeViewDelegate:(id)arg1;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (id)smallConfiguration;
- (id)unfavoriteButton;
- (id)unfavoriteConfiguration;
- (void)unfavoriteTapped:(id)arg1;
- (id)userData;

@end
