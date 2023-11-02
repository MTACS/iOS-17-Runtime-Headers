
@interface NotesBackgroundView : UIView <ICAccessibilityChildReparentingTarget> {
    <ICAccessibilityChildReparentingController> * _axChildReparentingController;
    UIView * _contentView;
    bool  _contentViewVisible;
    <ICAccessibilityChildReparentingProvider> * _elementForAccessibilityReparenting;
    bool  _hasBarBlur;
    bool  _previewing;
    NotesBarBackgroundView * _topBarView;
}

@property (nonatomic) <ICAccessibilityChildReparentingController> *axChildReparentingController;
@property (nonatomic, retain) UIView *contentView;
@property (getter=isContentViewVisible, nonatomic) bool contentViewVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <ICAccessibilityChildReparentingProvider> *elementForAccessibilityReparenting;
@property (nonatomic) bool hasBarBlur;
@property (readonly) unsigned long long hash;
@property (getter=isPreviewing, nonatomic) bool previewing;
@property (readonly) Class superclass;
@property (nonatomic, retain) NotesBarBackgroundView *topBarView;

- (void).cxx_destruct;
- (bool)_accessibilityIsScannerGroup;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_findDescendantAXElementOfClass:(Class)arg1;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;
- (id)accessibilityElements;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3;
- (void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)addSubviewAboveAllViews:(id)arg1;
- (void)applyContentViewBezelsStandalone:(bool)arg1;
- (id)axChildReparentingController;
- (void)commonInit;
- (id)contentView;
- (id)elementForAccessibilityReparenting;
- (bool)hasBarBlur;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContentViewVisible;
- (bool)isPreviewing;
- (void)reparentAccessibilityChildrenOfElement:(id)arg1;
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)scrollViewDescendantOfView:(id)arg1;
- (void)setAxChildReparentingController:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentView:(id)arg1 useSafeAreaLayoutGuide:(bool)arg2 standalone:(bool)arg3 needsAdditionalBottomMargin:(bool)arg4 needsAdditionalLeadingMargin:(bool)arg5;
- (void)setContentView:(id)arg1 useSafeAreaLayoutGuide:(bool)arg2 topMargin:(double)arg3 bottomMargin:(double)arg4 leadingMargin:(double)arg5 trailingMargin:(double)arg6 standalone:(bool)arg7;
- (void)setContentViewVisible:(bool)arg1;
- (void)setElementForAccessibilityReparenting:(id)arg1;
- (void)setHasBarBlur:(bool)arg1;
- (void)setPreviewing:(bool)arg1;
- (void)setTopBarView:(id)arg1;
- (id)topBarView;
- (void)updateContentViewBezelsStandalone:(bool)arg1 needsAdditionalBottomMargin:(bool)arg2 needsAdditionalLeadingMargin:(bool)arg3;

@end
