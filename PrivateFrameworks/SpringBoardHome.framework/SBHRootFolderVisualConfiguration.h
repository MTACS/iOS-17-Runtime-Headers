
@interface SBHRootFolderVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    double  _dockBackgroundViewCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _dockBackgroundViewInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _dockListViewInsets;
    double  _dockViewHeight;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _editModeButtonContentEdgeInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _editModeButtonLayoutOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _editModeButtonSize;
    double  _editingEntryAreaHorizontalInset;
    double  _idleTextVerticalOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageControlCustomPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageControlFrameInset;
    double  _pageControlVerticalOffset;
    struct SBRootFolderViewPageManagementLayoutMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSpacing; 
        double bottomMargin; 
        double listViewScale; 
    }  _pageManagement1x1LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSpacing; 
        double bottomMargin; 
        double listViewScale; 
    }  _pageManagement2x1LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSpacing; 
        double bottomMargin; 
        double listViewScale; 
    }  _pageManagement2x2LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSpacing; 
        double bottomMargin; 
        double listViewScale; 
    }  _pageManagement3x2LayoutMetrics;
    struct SBRootFolderViewPageManagementLayoutMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSpacing; 
        double bottomMargin; 
        double listViewScale; 
    }  _pageManagement3x3LayoutMetrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageManagementFocusModeOptionsButtonSize;
    double  _pageManagementPageCheckboxDiameter;
    double  _pageManagementPageCheckboxVerticalMargin;
    double  _scrollAccessoryVerticalOffsetAdjustmentForAuxiliaryView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dockBackgroundViewCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dockBackgroundViewInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } dockListViewInsets;
@property (nonatomic) double dockViewHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } editModeButtonContentEdgeInsets;
@property (nonatomic) struct UIOffset { double x1; double x2; } editModeButtonLayoutOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } editModeButtonSize;
@property (nonatomic) double editingEntryAreaHorizontalInset;
@property (readonly) unsigned long long hash;
@property (nonatomic) double idleTextVerticalOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } pageControlCustomPadding;
@property (nonatomic) struct CGSize { double x1; double x2; } pageControlFrameInset;
@property (nonatomic) double pageControlVerticalOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } pageManagementFocusModeOptionsButtonSize;
@property (nonatomic) double pageManagementPageCheckboxDiameter;
@property (nonatomic) double pageManagementPageCheckboxVerticalMargin;
@property (nonatomic) double scrollAccessoryVerticalOffsetAdjustmentForAuxiliaryView;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)dockBackgroundViewCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dockBackgroundViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })dockListViewInsets;
- (double)dockViewHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })editModeButtonContentEdgeInsets;
- (struct UIOffset { double x1; double x2; })editModeButtonLayoutOffset;
- (struct CGSize { double x1; double x2; })editModeButtonSize;
- (double)editingEntryAreaHorizontalInset;
- (unsigned long long)hash;
- (double)idleTextVerticalOffset;
- (id)init;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })pageControlCustomPadding;
- (struct CGSize { double x1; double x2; })pageControlFrameInset;
- (double)pageControlVerticalOffset;
- (struct CGSize { double x1; double x2; })pageManagementFocusModeOptionsButtonSize;
- (struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })pageManagementLayoutMetricsForLayoutConfiguration:(long long)arg1;
- (double)pageManagementPageCheckboxDiameter;
- (double)pageManagementPageCheckboxVerticalMargin;
- (double)scrollAccessoryVerticalOffsetAdjustmentForAuxiliaryView;
- (void)setDockBackgroundViewCornerRadius:(double)arg1;
- (void)setDockBackgroundViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDockListViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDockViewHeight:(double)arg1;
- (void)setEditModeButtonContentEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEditModeButtonLayoutOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setEditModeButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEditingEntryAreaHorizontalInset:(double)arg1;
- (void)setIdleTextVerticalOffset:(double)arg1;
- (void)setPageControlCustomPadding:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageControlFrameInset:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageControlVerticalOffset:(double)arg1;
- (void)setPageManagementFocusModeOptionsButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageManagementLayoutMetrics:(struct SBRootFolderViewPageManagementLayoutMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 forLayoutConfiguration:(long long)arg2;
- (void)setPageManagementPageCheckboxDiameter:(double)arg1;
- (void)setPageManagementPageCheckboxVerticalMargin:(double)arg1;
- (void)setScrollAccessoryVerticalOffsetAdjustmentForAuxiliaryView:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
