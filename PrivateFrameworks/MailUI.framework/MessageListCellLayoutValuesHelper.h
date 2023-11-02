
@interface MessageListCellLayoutValuesHelper : NSObject {
    UIBackgroundConfiguration * _defaultBackgroundConfiguration;
    MessageListCellLayoutValues * _defaultLayoutValues;
    MessageListCellLayoutValues * _expandedLayoutValues;
    bool  _inMultiSelectionMode;
    bool  _supportsPopover;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _systemLayoutMargins;
    UIColor * _tintColor;
    MessageListCellLayoutValues * _topHitsLayoutValues;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, copy) UIBackgroundConfiguration *defaultBackgroundConfiguration;
@property (nonatomic, retain) MessageListCellLayoutValues *defaultLayoutValues;
@property (nonatomic, retain) MessageListCellLayoutValues *expandedLayoutValues;
@property (nonatomic) bool inMultiSelectionMode;
@property (nonatomic) bool supportsPopover;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } systemLayoutMargins;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) MessageListCellLayoutValues *topHitsLayoutValues;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)defaultBackgroundConfiguration;
- (id)defaultLayoutValues;
- (double)dynamicRowHeightWithSummary:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)expandedLayoutValues;
- (bool)inMultiSelectionMode;
- (id)init;
- (void)invalidate;
- (id)layoutValuesForStyle:(long long)arg1;
- (void)setDefaultBackgroundConfiguration:(id)arg1;
- (void)setDefaultLayoutValues:(id)arg1;
- (void)setExpandedLayoutValues:(id)arg1;
- (void)setInMultiSelectionMode:(bool)arg1;
- (void)setSupportsPopover:(bool)arg1;
- (void)setSystemLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopHitsLayoutValues:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (bool)supportsPopover;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })systemLayoutMargins;
- (id)tintColor;
- (id)topHitsLayoutValues;
- (id)traitCollection;
- (void)updateTintColorFromView:(id)arg1;

@end
