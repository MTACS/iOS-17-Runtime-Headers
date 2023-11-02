
@interface PLPillControl : UIControl <PLContentSizeCategoryAdjusting, PLPill, UIPointerInteractionDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    PLPillContentView * _contentView;
    NSString * _preferredContentSizeCategory;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSArray *centerContentItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *leadingAccessoryView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *trailingAccessoryView;

- (void).cxx_destruct;
- (void)_configureShadowNecessary;
- (void)_performHighlight:(bool)arg1;
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
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)preferredContentSizeCategory;
- (id)referenceContentItemForIntrinsicContentSize;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCenterContentItems:(id)arg1;
- (void)setCenterContentItems:(id)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setReferenceContentItemForIntrinsicContentSize:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentItem:(id)arg1;
- (id)trailingAccessoryView;
- (void)traitCollectionDidChange:(id)arg1;

@end
