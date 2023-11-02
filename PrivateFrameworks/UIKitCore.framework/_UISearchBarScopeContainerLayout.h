
@interface _UISearchBarScopeContainerLayout : _UISearchBarLayoutBase {
    bool  _collapsed;
    <_UISearchBarContainerSublayoutDelegate> * _delegate;
    bool  _hasScopeBar;
    _UISearchBarSearchContainerLayout * _neighboringSearchLayout;
    unsigned long long  _numberOfScopeTitles;
    UIView * _scopeBar;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scopeBarLayoutFrame;
    double  _scopeBarOpacity;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } containerSpecificInsets;
@property (nonatomic) <_UISearchBarContainerSublayoutDelegate> *delegate;
@property (nonatomic) bool hasScopeBar;
@property (nonatomic, readonly) double naturalContainerHeight;
@property (nonatomic, retain) _UISearchBarSearchContainerLayout *neighboringSearchLayout;
@property (nonatomic) unsigned long long numberOfScopeTitles;
@property (nonatomic, retain) UIView *scopeBar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scopeBarLayoutFrame;
@property (nonatomic, readonly) double scopeBarOpacity;

- (void).cxx_destruct;
- (void)applyLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerSpecificInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (bool)hasScopeBar;
- (bool)isCollapsed;
- (double)naturalContainerHeight;
- (id)neighboringSearchLayout;
- (unsigned long long)numberOfScopeTitles;
- (id)scopeBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scopeBarLayoutFrame;
- (double)scopeBarOpacity;
- (double)scopeControlHeight;
- (void)setCollapsed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasScopeBar:(bool)arg1;
- (void)setNeighboringSearchLayout:(id)arg1;
- (void)setNumberOfScopeTitles:(unsigned long long)arg1;
- (void)setScopeBar:(id)arg1;
- (void)updateLayout;

@end
