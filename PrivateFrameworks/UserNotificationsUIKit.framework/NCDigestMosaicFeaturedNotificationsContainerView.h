
@interface NCDigestMosaicFeaturedNotificationsContainerView : UIView <NCDigestFeaturedNotificationsContainerDisplaying> {
    bool  _adjustsFontForContentSizeCategory;
    NSArray * _featuredNotificationContentProviders;
    NSString * _materialGroupNameBase;
    NSMutableArray * _notificationViews;
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
- (void)_configureNotificationContentView:(id)arg1 withContentProvider:(id)arg2 showImageAttachment:(bool)arg3 contentViewStyle:(unsigned long long)arg4;
- (unsigned long long)_contentViewStyleForIndex:(unsigned long long)arg1;
- (bool)_isDisplayingRichFeaturedNotifications;
- (void)_layoutLargeFeaturedView:(id)arg1;
- (void)_layoutMediumFeaturedView:(id)arg1;
- (void)_layoutSmallFeaturedView:(id)arg1;
- (id)_newFeaturedNotificationViewForContentProvider:(id)arg1 contentViewStyle:(unsigned long long)arg2 showImageAttachment:(bool)arg3;
- (id)_newNotificationSeamlessContentViewForContentProvider:(id)arg1;
- (double)_overlapMarginForLargeFeaturedView;
- (bool)_shouldShowImageAttachments;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sizingBoundsForLargeFeaturedViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sizingBoundsForMediumFeaturedViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sizingBoundsForSmallFeaturedViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)featuredNotificationContentProviders;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setFeaturedNotificationContentProviders:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateContent;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
