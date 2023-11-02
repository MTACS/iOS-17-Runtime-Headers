
@interface _UIToolbarContentView : _UIBarContentView {
    NSMapTable * _absorptionTable;
    _UIPointerInteractionAssistant * _assistant;
    _UIButtonBar * _buttonBar;
    NSLayoutConstraint * _buttonBarLeadingConstraint;
    NSLayoutConstraint * _buttonBarTrailingConstraint;
    bool  _compactMetrics;
    _UIBarButtonItemData * _doneItemAppearance;
    long long  _itemDistribution;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _padding;
    _UIBarButtonItemData * _plainItemAppearance;
    double  _standardEdgeSpacing;
}

@property (nonatomic) bool compactMetrics;
@property (nonatomic, copy) _UIBarButtonItemData *doneItemAppearance;
@property (nonatomic) long long itemDistribution;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, copy) _UIBarButtonItemData *plainItemAppearance;

- (void).cxx_destruct;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_appearanceChanged;
- (id)_computeEdgeAbsorptionForItems:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_directionalSafeArea;
- (void)_ensureButtonBar;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setButtonBarLeadingInset:(double)arg1 trailingInset:(double)arg2;
- (void)_updateThreeUpFlagsForItems:(id)arg1;
- (double)absorptionForItem:(id)arg1;
- (long long)barType;
- (bool)compactMetrics;
- (double)defaultEdgeSpacing;
- (double)defaultTextPadding;
- (id)doneItemAppearance;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (long long)itemDistribution;
- (void)layoutMarginsDidChange;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)plainItemAppearance;
- (void)reloadWithItems:(id)arg1;
- (void)setCompactMetrics:(bool)arg1;
- (void)setDoneItemAppearance:(id)arg1;
- (void)setItemDistribution:(long long)arg1;
- (void)setPadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlainItemAppearance:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateContent;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end
