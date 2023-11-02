
@interface SwiftUI.UpdateCoalescingTableView : UITableView {
    void _lastUpdateSeed;
    void bridgedState;
    void cachedIdealSize;
    void ignoreGraphUpdates;
    void isSidebarStyle;
    void lastConfigurationHash;
    void needsUpdateAlignmentInsets;
    void pendingGraphUpdate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pendingScrollTarget;
    void previousHorizontalMargin;
    void rowSpacing;
    void safeAreaTransitionState;
    void shouldDetermineInsetStyle;
    void visibleCellsUpdate;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool sectionContentInsetFollowsLayoutMargins;

+ (bool)_isFromSwiftUI;
+ (bool)_isInternalTableView;

- (void).cxx_destruct;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (double)_rowSpacing;
- (bool)_sectionContentInsetFollowsLayoutMargins;
- (void)_setSectionContentInsetFollowsLayoutMargins:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)safeAreaInsetsDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
