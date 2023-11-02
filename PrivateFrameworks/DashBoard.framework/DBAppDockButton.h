
@interface DBAppDockButton : DBStatusBarButton <NSCopying, SBLeafIconObserver> {
    bool  _active;
    UIImageView * _badgeView;
    NSString * _bundleIdentifier;
    DBLeafIcon * _icon;
    UIImageView * _iconFocusRingImageView;
    UIImageView * _iconFocusRingUnreadImageView;
    NSLayoutConstraint * _iconFocusRingUnreadImageViewCenterConstraint;
    UIImageView * _iconImageView;
    <DBIconProviding> * _iconProvider;
    bool  _showBadge;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIImageView *badgeView;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DBLeafIcon *icon;
@property (nonatomic, retain) UIImageView *iconFocusRingImageView;
@property (nonatomic, retain) UIImageView *iconFocusRingUnreadImageView;
@property (nonatomic, retain) NSLayoutConstraint *iconFocusRingUnreadImageViewCenterConstraint;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic) <DBIconProviding> *iconProvider;
@property (nonatomic) bool showBadge;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupImagesIfNecessary;
- (void)_updateCenterXConstraintConstant;
- (void)_updateFocusRings;
- (void)_updateImageForBundleIdentifier:(bool)arg1 crossfade:(bool)arg2;
- (id)badgeView;
- (id)bundleIdentifier;
- (bool)canBecomeFocused;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)icon;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)iconFocusRingImageView;
- (id)iconFocusRingUnreadImageView;
- (id)iconFocusRingUnreadImageViewCenterConstraint;
- (void)iconImageDidUpdate:(id)arg1;
- (id)iconImageView;
- (id)iconProvider;
- (id)initWithIconProvider:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setBadgeHidden:(bool)arg1 animated:(bool)arg2;
- (void)setBadgeView:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1 animated:(bool)arg2;
- (void)setFocusHighlightColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconFocusRingImageView:(id)arg1;
- (void)setIconFocusRingUnreadImageView:(id)arg1;
- (void)setIconFocusRingUnreadImageViewCenterConstraint:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setIconProvider:(id)arg1;
- (void)setShowBadge:(bool)arg1;
- (void)setShowBadge:(bool)arg1 animated:(bool)arg2;
- (bool)showBadge;
- (void)traitCollectionDidChange:(id)arg1;

@end
