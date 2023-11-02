
@interface SBHAddWidgetSheetViewControllerBase : UIViewController {
    unsigned long long  _addWidgetSheetLocation;
    struct SBHPadAddWidgetSheetMetrics { 
        double sheetMargin; 
        double leadingPadding; 
        double sidebarWidth; 
        double gutterPadding; 
        double trailingPadding; 
        double topPadding; 
        double widgetScaleFactor; 
        struct CGSize { 
            double width; 
            double height; 
        } scaledWidgetSize; 
        unsigned long long widgetColumns; 
        struct CGSize { 
            double width; 
            double height; 
        } detailWidgetPadding; 
        double detailAddButtonTopSpacing; 
        double detailAddButtonBottomSpacing; 
        double detailPageControlTopSpacing; 
    }  _addWidgetSheetMetrics;
    unsigned long long  _addWidgetSheetStyle;
    unsigned long long  _addWidgetSheetWidgetBackgroundType;
    struct SBHWidgetFilteringParameters { 
        unsigned long long families; 
        bool includesNonStackable; 
        bool requiresRemovableBackground; 
    }  _allowedWidgets;
    bool  _allowsFakeWidgets;
    SBHAddWidgetSheetAppCollectionViewCellConfigurator * _appCellConfigurator;
    <SBHAddWidgetSheetViewControllerDelegate> * _delegate;
    MTMaterialView * _externalBackgroundView;
    <SBIconViewProviding> * _iconViewProvider;
    <SBIconListLayoutProvider> * _listLayoutProvider;
}

@property (nonatomic) unsigned long long addWidgetSheetLocation;
@property (nonatomic) struct SBHPadAddWidgetSheetMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; unsigned long long x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; double x11; double x12; double x13; } addWidgetSheetMetrics;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) unsigned long long addWidgetSheetWidgetBackgroundType;
@property (nonatomic, readonly) struct SBHWidgetFilteringParameters { unsigned long long x1; bool x2; bool x3; } allowedWidgets;
@property (nonatomic) bool allowsFakeWidgets;
@property (nonatomic, retain) SBHAddWidgetSheetAppCollectionViewCellConfigurator *appCellConfigurator;
@property (nonatomic) <SBHAddWidgetSheetViewControllerDelegate> *delegate;
@property (nonatomic, retain) MTMaterialView *externalBackgroundView;
@property (nonatomic) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, readonly) long long widgetWrapperViewControllerBackgroundType;

- (void).cxx_destruct;
- (unsigned long long)addWidgetSheetLocation;
- (struct SBHPadAddWidgetSheetMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; unsigned long long x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; double x11; double x12; double x13; })addWidgetSheetMetrics;
- (unsigned long long)addWidgetSheetStyle;
- (unsigned long long)addWidgetSheetWidgetBackgroundType;
- (struct SBHWidgetFilteringParameters { unsigned long long x1; bool x2; bool x3; })allowedWidgets;
- (bool)allowsFakeWidgets;
- (id)appCellConfigurator;
- (id)delegate;
- (id)externalBackgroundView;
- (id)iconViewProvider;
- (id)initWithListLayoutProvider:(id)arg1 iconViewProvider:(id)arg2 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x1; bool x2; bool x3; })arg3 appCellConfigurator:(id)arg4 addWidgetSheetStyle:(unsigned long long)arg5;
- (id)initWithListLayoutProvider:(id)arg1 iconViewProvider:(id)arg2 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x1; bool x2; bool x3; })arg3 appCellIconImageCache:(id)arg4 addWidgetSheetStyle:(unsigned long long)arg5;
- (id)listLayoutProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredInsetsForSheetPresentationInInterfaceOrientation:(long long)arg1;
- (void)setAddWidgetSheetLocation:(unsigned long long)arg1;
- (void)setAddWidgetSheetMetrics:(struct SBHPadAddWidgetSheetMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; unsigned long long x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; double x11; double x12; double x13; })arg1;
- (void)setAddWidgetSheetStyle:(unsigned long long)arg1;
- (void)setAddWidgetSheetWidgetBackgroundType:(unsigned long long)arg1;
- (void)setAllowsFakeWidgets:(bool)arg1;
- (void)setAppCellConfigurator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalBackgroundView:(id)arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (long long)widgetWrapperViewControllerBackgroundType;

@end
