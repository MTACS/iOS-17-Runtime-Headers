
@interface NCDigestInlineFeaturedNotificationsContainerView : NCNotificationListBaseContentView <NCDigestFeaturedNotificationsContainerDisplaying> {
    bool  _adjustsFontForContentSizeCategory;
    UIView * _dividerView;
    NSArray * _featuredNotificationContentProviders;
    NCNotificationInlineFeaturedSectionList * _inlineFeaturedSectionList;
    NSString * _materialGroupNameBase;
    NSString * _preferredContentSizeCategory;
    MTVisualStylingProvider * _strokeVisualStylingProvider;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *featuredNotificationContentProviders;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDividerViewIfNecessary;
- (void)_configureInlineFeaturedSectionListIfNecessaryWithDelegate:(id)arg1;
- (void)_layoutDividerViewIfNecessary;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)featuredNotificationContentProviders;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setFeaturedNotificationContentProviders:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateContent;

@end
