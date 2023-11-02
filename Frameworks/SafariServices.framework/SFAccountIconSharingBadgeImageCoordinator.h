
@interface SFAccountIconSharingBadgeImageCoordinator : NSObject {
    double  _badgeDiameter;
    UIImageView * _badgeImageView;
    UIView * _badgeMaskView;
    UIImageView * _iconImageView;
    UIView * _parentView;
    bool  _showsBadge;
}

- (void).cxx_destruct;
- (id)_badgeImage;
- (double)_badgeMaskDiameter;
- (void)_createBadgeImageViewIfNecessary;
- (double)_iconImageViewHeight;
- (void)_layOutBadgeImageViewIfNecessary;
- (void)containerDidLayoutSubviews;
- (id)initWithIconImageView:(id)arg1 iconDiameter:(double)arg2 parentView:(id)arg3;
- (void)reset;
- (void)setShowsBadge:(bool)arg1;

@end
