
@interface PLPillContentView : UIView <PLContentSizeCategoryAdjusting, PLPillPrivate> {
    NSMapTable * _accessoryViewsToConstraints;
    bool  _adjustsFontForContentSizeCategory;
    NSArray * _centerContentItems;
    UIStackView * _centerStackView;
    UIView * _leadingAccessoryView;
    NSString * _preferredContentSizeCategory;
    PLPillContentItem * _referenceContentItemForIntrinsicContentSize;
    UIView * _referenceContentItemView;
    UIView * _trailingAccessoryView;
    NSMapTable * _wrapperViewsToConstraints;
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

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_arrangedSubviewForContentItem:(id)arg1;
- (double)_capInsetForAccessoryView:(id)arg1;
- (double)_capWidthWithAccessoryView:(id)arg1;
- (void)_cleanupStackView;
- (void)_configureCenterStackViewIfNecessary;
- (void)_incomingTopWrapperView:(id*)arg1 incomingBottomWrapperView:(id*)arg2 outgoingWrapperViews:(id)arg3 forOutgoingContentItems:(id)arg4 incomingContentItems:(id)arg5 existingWrapperViews:(id)arg6;
- (struct CGSize { double x1; double x2; })_intrinsicContentSizeWithReferenceView:(id)arg1;
- (void)_invalidateVerticalCenterConstraintsForAccessoryView:(id)arg1;
- (bool)_isAccessoryPinnedToTopLine;
- (bool)_isWrappingRequiredForCenterContentItemView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_referenceContentItemView;
- (void)_updateConstraintsForAccessoryView:(id)arg1;
- (void)_updateConstraintsForWrapperView:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)centerContentItems;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithLeadingAccessoryView:(id)arg1;
- (id)initWithLeadingAccessoryView:(id)arg1 trailingAccessoryView:(id)arg2;
- (id)initWithTrailingAccessoryView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isWrappingRequiredForCenterContentItem:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)leadingAccessoryView;
- (id)preferredContentSizeCategory;
- (id)referenceContentItemForIntrinsicContentSize;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCenterContentItems:(id)arg1;
- (void)setCenterContentItems:(id)arg1 animated:(bool)arg2;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setReferenceContentItemForIntrinsicContentSize:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentItem:(id)arg1;
- (id)trailingAccessoryView;
- (void)updateCenterContentItem:(id)arg1 withContentItem:(id)arg2;
- (void)updateConstraints;

@end
