
@interface HKLegendView : HKBorderLineView {
    NSLayoutConstraint * _bottomConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSMutableArray * _extensionViews;
    NSLayoutConstraint * _leadingConstraint;
    NSArray * _leftEntries;
    NSMutableArray * _leftEntryViews;
    UIColor * _lollipopColor;
    UIStackView * _mainStack;
    bool  _opaqueBackground;
    NSArray * _rightEntries;
    NSMutableArray * _rightEntryViews;
    UIColor * _topBorderColor;
    NSLayoutConstraint * _topConstraint;
    UIView * _topDividerView;
    NSLayoutConstraint * _trailingConstraint;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) NSMutableArray *extensionViews;
@property (nonatomic, readonly) NSArray *leftEntries;
@property (nonatomic, retain) UIColor *lollipopColor;
@property (nonatomic) bool opaqueBackground;
@property (nonatomic, readonly) NSArray *rightEntries;
@property (nonatomic, retain) UIColor *topBorderColor;

+ (double)horizontalOffsetWithOpaque:(bool)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })modifiedInsetsForOpaqueLegend:(bool)arg1 originalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

- (void).cxx_destruct;
- (void)_rebuildExtensionsWithStickLocations:(id)arg1;
- (void)_rebuildStackStructure;
- (void)_updateLegendLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)extensionViews;
- (void)hideLollipops;
- (id)initWithEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 opaqueBackground:(bool)arg2;
- (id)leftEntries;
- (id)lollipopColor;
- (bool)opaqueBackground;
- (id)rightEntries;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExtensionViews:(id)arg1;
- (void)setLeftEntries:(id)arg1 rightEntries:(id)arg2;
- (void)setLollipopColor:(id)arg1;
- (void)setOpaqueBackground:(bool)arg1;
- (void)setTopBorderColor:(id)arg1;
- (void)showLollipopsWithSelectedValues:(id)arg1;
- (id)topBorderColor;

@end
