
@interface PLPillView : UIView <MTMaterialGrouping, MTVisualStylingProviding, PLContentSizeCategoryAdjusting, PLPill> {
    bool  _adjustsFontForContentSizeCategory;
    PLPillContentView * _contentView;
    MTMaterialView * _materialView;
    NSString * _preferredContentSizeCategory;
    MTShadowView * _shadowView;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSArray *centerContentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *leadingAccessoryView;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowOutsets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *trailingAccessoryView;

- (void).cxx_destruct;
- (void)_configureShadowViewIfNecessary;
- (double)_effectiveCornerRadius;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)centerContentItems;
- (id)init;
- (id)initWithLeadingAccessoryView:(id)arg1;
- (id)initWithLeadingAccessoryView:(id)arg1 trailingAccessoryView:(id)arg2;
- (id)initWithTrailingAccessoryView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)leadingAccessoryView;
- (id)materialGroupNameBase;
- (id)preferredContentSizeCategory;
- (id)referenceContentItemForIntrinsicContentSize;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCenterContentItems:(id)arg1;
- (void)setCenterContentItems:(id)arg1 animated:(bool)arg2;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setReferenceContentItemForIntrinsicContentSize:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowOutsets;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentItem:(id)arg1;
- (id)trailingAccessoryView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCenterContentItem:(id)arg1 withContentItem:(id)arg2;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
