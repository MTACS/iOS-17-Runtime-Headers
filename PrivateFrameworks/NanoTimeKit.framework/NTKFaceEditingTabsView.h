
@interface NTKFaceEditingTabsView : UIView {
    UIView * _labelContainer;
    NSMutableArray * _labels;
    NSArray * _orderedTabs;
    unsigned long long  _selectedTab;
}

@property (nonatomic, retain) NSArray *orderedTabs;
@property (nonatomic) unsigned long long selectedTab;

+ (id)labelFont;

- (void).cxx_destruct;
- (void)_addOrRemoveLabelsAsNeeded;
- (void)_applyOrderedTabsAndLayout;
- (void)_applySelectedTab:(unsigned long long)arg1;
- (double)_containerOffsetForLabelAtIndex:(long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTab:(unsigned long long)arg2 toTab:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)orderedTabs;
- (unsigned long long)selectedTab;
- (void)setOrderedTabs:(id)arg1;
- (void)setSelectedTab:(unsigned long long)arg1;

@end
