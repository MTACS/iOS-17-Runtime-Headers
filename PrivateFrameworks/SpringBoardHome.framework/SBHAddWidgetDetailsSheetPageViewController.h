
@interface SBHAddWidgetDetailsSheetPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate> {
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
    <SBHAddWidgetDetailsSheetPageViewControllerDelegate> * _delegate;
    UILayoutGuide * _layoutGuide;
    UIView * _referenceView;
    double  _scale;
    SBHWidgetWrapperViewController * _widgetWrapperViewController;
}

@property (nonatomic) struct SBHPadAddWidgetSheetMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; unsigned long long x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; double x11; double x12; double x13; } addWidgetSheetMetrics;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHAddWidgetDetailsSheetPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isJumpAnimationInProgress, nonatomic) bool jumpAnimationInProgress;
@property (nonatomic, retain) UILayoutGuide *layoutGuide;
@property (nonatomic, retain) UIView *referenceView;
@property (nonatomic) double scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBHWidgetDragHandling> *widgetDragHandler;
@property (nonatomic, readonly) SBHWidgetWrapperViewController *widgetWrapperViewController;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } wrapperViewTransform;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createSizeConstraintsForWrapperView:(id)arg1;
- (void)_createViews;
- (void)_pauseLayer:(id)arg1;
- (void)_resumeLayer:(id)arg1;
- (void)_updateWidgetScale;
- (struct CGSize { double x1; double x2; })_widgetPadding;
- (struct SBHPadAddWidgetSheetMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; unsigned long long x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; double x11; double x12; double x13; })addWidgetSheetMetrics;
- (unsigned long long)addWidgetSheetStyle;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)arg1;
- (void)configureBackgroundView:(id)arg1 matchingMaterialBeneathWrapperViewController:(id)arg2;
- (id)delegate;
- (id)initWithWidgetWrapperViewController:(id)arg1;
- (bool)isJumpAnimationInProgress;
- (id)layoutGuide;
- (void)loadView;
- (id)referenceView;
- (double)scale;
- (void)setAddWidgetSheetMetrics:(struct SBHPadAddWidgetSheetMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; unsigned long long x9; struct CGSize { double x_10_1_1; double x_10_1_2; } x10; double x11; double x12; double x13; })arg1;
- (void)setAddWidgetSheetStyle:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJumpAnimationInProgress:(bool)arg1;
- (void)setLayoutGuide:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setScale:(double)arg1;
- (void)updateParallaxEffectInReferenceView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)widgetDragHandler;
- (id)widgetWrapperViewController;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })wrapperViewTransform;

@end
