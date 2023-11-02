
@interface UITableViewIndex : UIControl <UIAccessibilityHUDGestureDelegate> {
    UIAccessibilityHUDGestureManager * _axHUDGestureManager;
    double  _bottomPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeToFit;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _drawingInsets;
    NSArray * _entries;
    UIFont * _font;
    long long  _idiom;
    UIColor * _indexBackgroundColor;
    UIColor * _indexColor;
    UIColor * _indexTrackingBackgroundColor;
    bool  _pastBottom;
    bool  _pastTop;
    long long  _selectedSection;
    NSArray * _titles;
    double  _topPadding;
    double  _verticalTextHeightEstimate;
    <UITableViewIndexVisualStyle> * _visualStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } drawingInsets;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *indexBackgroundColor;
@property (nonatomic, retain) UIColor *indexColor;
@property (nonatomic, retain) UIColor *indexTrackingBackgroundColor;
@property (nonatomic, readonly) bool pastBottom;
@property (nonatomic, readonly) bool pastTop;
@property (nonatomic, readonly) long long selectedSection;
@property (nonatomic, readonly) NSString *selectedSectionTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *titles;
@property (nonatomic, retain) <UITableViewIndexVisualStyle> *visualStyle;

+ (void)makeTableViewIndex:(id*)arg1 containerView:(id*)arg2 forTraits:(id)arg3;
+ (void)registerVisualStyle:(Class)arg1 forIdiom:(long long)arg2;
+ (id)visualStyleForTableViewIndex:(id)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
- (void)_cacheAndMeasureTitles;
- (long long)_coreIdiom;
- (id)_displayTitles;
- (id)_dotImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveBounds;
- (id)_externalDotImage;
- (void)_handleTouches:(id)arg1 withEvent:(id)arg2;
- (long long)_idiom;
- (long long)_indexForEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_largeContentViewerEnabledStatusDidChange:(id)arg1;
- (double)_minLineSpacingForIdiom:(long long)arg1;
- (void)_setIdiom:(long long)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stride:(double*)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })drawingInsets;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)font;
- (id)indexBackgroundColor;
- (id)indexColor;
- (id)indexTrackingBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;
- (bool)pastBottom;
- (bool)pastTop;
- (long long)selectedSection;
- (id)selectedSectionTitle;
- (void)setDrawingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndexBackgroundColor:(id)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setIndexTrackingBackgroundColor:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)titles;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)visualStyle;

@end
