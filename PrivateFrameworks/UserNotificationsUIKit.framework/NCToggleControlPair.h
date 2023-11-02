
@interface NCToggleControlPair : UIView <MTMaterialGrouping, PLContentSizeCategoryAdjusting> {
    NSString * _materialGroupNameBase;
    NSArray * _toggleControls;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *clearAllText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *toggleControls;

- (void).cxx_destruct;
- (double)_effectiveInterControlPadding;
- (double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2;
- (void)_handleTouchUpInside:(id)arg1 withEvent:(id)arg2;
- (id)_leadingToggleControl;
- (id)_trailingToggleControl;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)clearAllText;
- (id)initWithLeadingToggleControl:(id)arg1 trailingToggleControl:(id)arg2;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setClearAllText:(id)arg1;
- (void)setLeadingControlExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setMaterialGroupNameBase:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)toggleControls;

@end
