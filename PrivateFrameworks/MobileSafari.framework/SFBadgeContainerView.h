
@interface SFBadgeContainerView : UIView {
    SFBadge * _badge;
    SFBadgeMaskView * _badgeMask;
    UIColor * _badgeTintColor;
    UIView * _contentView;
    bool  _positionsBadgeRelativeToLayoutMargins;
    bool  _showsBadge;
}

@property (nonatomic, retain) UIColor *badgeTintColor;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool positionsBadgeRelativeToLayoutMargins;
@property (nonatomic) bool showsBadge;

- (void).cxx_destruct;
- (id)badgeTintColor;
- (id)contentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)positionsBadgeRelativeToLayoutMargins;
- (void)pulse;
- (void)setBadgeTintColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setPositionsBadgeRelativeToLayoutMargins:(bool)arg1;
- (void)setShowsBadge:(bool)arg1;
- (bool)showsBadge;

@end
