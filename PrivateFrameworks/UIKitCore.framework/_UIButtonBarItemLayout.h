
@interface _UIButtonBarItemLayout : _UIButtonBarLayout {
    NSLayoutConstraint * _groupSameSize;
    UIBarButtonItem * _item;
    UIView * _itemView;
    id /* block */  _itemViewGenerator;
    _UITAMICAdaptorView * _itemViewWrapper;
    NSLayoutConstraint * _maximumAlignmentSize;
    NSLayoutConstraint * _popoverGuideHeight;
    NSLayoutConstraint * _popoverGuideLeading;
    NSLayoutConstraint * _popoverGuideTop;
    NSLayoutConstraint * _popoverGuideTrailing;
    NSLayoutConstraint * _requestedSize;
    bool  _suppressSpacing;
    bool  _useGroupSizing;
}

@property (nonatomic, copy) id /* block */ itemViewGenerator;
@property (nonatomic) bool suppressSpacing;
@property (nonatomic) bool useGroupSizing;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (bool)_shouldBeDirty;
- (void)_updateCustomView;
- (void)_updateItemView;
- (void)_updateItemViewSizing;
- (id)barButtonItem;
- (id)description;
- (void)dirtyLayoutForPlainAppearanceChange:(bool)arg1 doneAppearanceChanged:(bool)arg2;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (id /* block */)itemViewGenerator;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)setItemViewGenerator:(id /* block */)arg1;
- (void)setSuppressSpacing:(bool)arg1;
- (void)setUseGroupSizing:(bool)arg1;
- (bool)shouldHorizontallyCenterView:(id)arg1;
- (bool)suppressSpacing;
- (bool)useGroupSizing;

@end
