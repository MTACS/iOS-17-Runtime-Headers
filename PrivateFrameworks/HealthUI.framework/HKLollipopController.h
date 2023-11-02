
@interface HKLollipopController : NSObject {
    HKInteractiveChartAnnotationView * _annotationView;
    bool  _centerLollipopVertically;
    <HKLollipopDelegate> * _delegate;
    NSMutableArray * _extensionViews;
    UIView * _fieldView;
    double  _lastDismissTime;
    NSDate * _lastFirstLollipopDate;
    NSArray * _lastSelectionLocation;
    bool  _noAnimationVisibility;
    UIView * _parentView;
}

@property (nonatomic, readonly) HKInteractiveChartAnnotationView *annotationView;
@property (nonatomic) bool centerLollipopVertically;
@property (nonatomic, readonly) <HKLollipopDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *extensionViews;
@property (nonatomic, retain) UIView *fieldView;
@property (nonatomic) double lastDismissTime;
@property (nonatomic, retain) NSDate *lastFirstLollipopDate;
@property (nonatomic, copy) NSArray *lastSelectionLocation;
@property (nonatomic) bool noAnimationVisibility;
@property (nonatomic, retain) UIView *parentView;

+ (bool)pointSelectionContextsHaveUserInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_bringViewsToFront;
- (id)_lollipopAnnotationColor;
- (id)_lollipopExtensionColor;
- (double)_lollipopExtensionLength;
- (double)_lollipopExtensionWidth;
- (id)_lollipopFieldColor;
- (void)_positionAnnotationViewWithStickLocations:(id)arg1;
- (void)_rebuildExtensionsWithStickLocations:(id)arg1;
- (bool)_selectionHasMoved:(id)arg1;
- (void)_setAlpha:(double)arg1;
- (void)_setExtensionViewBackgrounds;
- (void)_setHidden:(bool)arg1;
- (id)_stickLocationsFromPointContexts:(id)arg1;
- (id)annotationView;
- (bool)centerLollipopVertically;
- (id)delegate;
- (id)extensionViews;
- (id)fieldView;
- (id)firstLollipopDateSinceDelta:(double)arg1;
- (id)initWithAnnotationDataSource:(id)arg1 parentView:(id)arg2 delegate:(id)arg3;
- (bool)isVisible;
- (double)lastDismissTime;
- (id)lastFirstLollipopDate;
- (id)lastSelectionLocation;
- (bool)noAnimationVisibility;
- (id)parentView;
- (void)setCenterLollipopVertically:(bool)arg1;
- (void)setExtensionViews:(id)arg1;
- (void)setFieldView:(id)arg1;
- (void)setInvisibleAnimated:(bool)arg1;
- (void)setLastDismissTime:(double)arg1;
- (void)setLastFirstLollipopDate:(id)arg1;
- (void)setLastSelectionLocation:(id)arg1;
- (void)setNoAnimationVisibility:(bool)arg1;
- (void)setParentView:(id)arg1;
- (void)setVisibleWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pointContexts:(id)arg2 animated:(bool)arg3;
- (void)updateWithPointContexts:(id)arg1;

@end
