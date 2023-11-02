
@interface SBHPageManagementCellView : UIView <SBFolderObserver, SBIconListModelObserver> {
    SBFolder * _folder;
    bool  _hasCleanedUpListView;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    MTMaterialView * _listBackgroundView;
    UIView * _listHighlightView;
    bool  _listHighlighted;
    SBIconListView * _listView;
    struct SBHPageManagementCellMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } fullListViewSize; 
        struct CGSize { 
            double width; 
            double height; 
        } scaledListViewSize; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } foregroundInsets; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } backgroundInsets; 
        double listViewVerticalPositionAdjustment; 
        double toggleButtonDiameter; 
        double toggleButtonVerticalMargin; 
    }  _metrics;
    bool  _scalesListView;
    SBHPageManagementCheckbox * _toggleButton;
    double  _toggleButtonAlpha;
    MTMaterialView * _toggleButtonBackgroundView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFolder *folder;
@property (nonatomic) bool hasCleanedUpListView;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly) MTMaterialView *listBackgroundView;
@property (nonatomic, readonly) UIView *listHighlightView;
@property (getter=isListHighlighted, nonatomic) bool listHighlighted;
@property (nonatomic, readonly) SBIconListView *listView;
@property (nonatomic) bool scalesListView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBHPageManagementCheckbox *toggleButton;
@property (nonatomic) double toggleButtonAlpha;
@property (nonatomic, readonly) MTMaterialView *toggleButtonBackgroundView;

- (void).cxx_destruct;
- (void)_togglePageHidden:(id)arg1;
- (void)cleanUpListView;
- (id)folder;
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;
- (bool)hasCleanedUpListView;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (void)iconListHiddenDidChange:(id)arg1;
- (id)initWithListView:(id)arg1 listBackgroundView:(id)arg2 toggleButtonBackgroundView:(id)arg3 folder:(id)arg4 metrics:(struct SBHPageManagementCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; double x5; double x6; double x7; })arg5 toggleButtonAllowed:(bool)arg6;
- (bool)isListHighlighted;
- (void)layoutSubviews;
- (id)listBackgroundView;
- (id)listHighlightView;
- (id)listView;
- (bool)scalesListView;
- (void)setHasCleanedUpListView:(bool)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setListHighlighted:(bool)arg1;
- (void)setScalesListView:(bool)arg1;
- (void)setToggleButtonAlpha:(double)arg1;
- (id)toggleButton;
- (double)toggleButtonAlpha;
- (id)toggleButtonBackgroundView;

@end
