
@interface SBHWidgetContainerView : UIView {
    NSString * _applicationName;
    bool  _blockedForScreenTimeExpiration;
    UILabel * _descriptionLabel;
    unsigned long long  _gridSizeClass;
    bool  _lastRequestedClipToBoundsValue;
    bool  _requiresClippingToBounds;
    MTMaterialView * _screenTimeLockoutView;
    UILabel * _titleLabel;
    UIView * _widgetView;
}

@property (nonatomic, copy) NSString *applicationName;
@property (getter=isBlockedForScreenTimeExpiration, nonatomic) bool blockedForScreenTimeExpiration;
@property (nonatomic) unsigned long long gridSizeClass;
@property (nonatomic) bool requiresClippingToBounds;
@property (nonatomic, readonly) MTMaterialView *screenTimeLockoutView;
@property (nonatomic) UIView *widgetView;

- (void).cxx_destruct;
- (id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 maxSizeCategory:(id)arg3;
- (void)_updateScreenTimeLockoutView;
- (id)applicationName;
- (unsigned long long)gridSizeClass;
- (id)initWithGridSizeClass:(unsigned long long)arg1 applicationName:(id)arg2;
- (bool)isBlockedForScreenTimeExpiration;
- (void)layoutSubviews;
- (bool)requiresClippingToBounds;
- (id)screenTimeLockoutView;
- (void)setApplicationName:(id)arg1;
- (void)setBlockedForScreenTimeExpiration:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setGridSizeClass:(unsigned long long)arg1;
- (void)setRequiresClippingToBounds:(bool)arg1;
- (void)setWidgetView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)widgetView;

@end
