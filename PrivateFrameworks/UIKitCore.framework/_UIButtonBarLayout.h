
@interface _UIButtonBarLayout : NSObject {
    bool  _dirty;
    <_UIButtonBarLayoutMetricsData> * _layoutMetrics;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, readonly) bool isGroupLayout;
@property (nonatomic, readonly) bool isSpaceLayout;
@property (nonatomic, readonly) NSArray *subLayouts;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (id)_metricsData;
- (bool)_shouldBeDirty;
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)addLayoutGuides:(id)arg1;
- (void)addLayoutViews:(id)arg1;
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;
- (id)barButtonItem;
- (bool)compact;
- (void)configure;
- (id)description;
- (void)dirtyLayoutForPlainAppearanceChange:(bool)arg1 doneAppearanceChanged:(bool)arg2;
- (id)init;
- (id)initWithLayoutMetrics:(id)arg1;
- (bool)isDirty;
- (bool)isGroupLayout;
- (bool)isSpaceLayout;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)setDirty:(bool)arg1;
- (void)setSuppressSpacing:(bool)arg1;
- (void)setUseGroupSizing:(bool)arg1;
- (bool)shouldHorizontallyCenterView:(id)arg1;
- (id)subLayouts;
- (bool)suppressSpacing;
- (bool)useGroupSizing;

@end
