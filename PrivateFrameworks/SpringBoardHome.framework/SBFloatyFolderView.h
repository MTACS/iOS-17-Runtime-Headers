
@interface SBFloatyFolderView : SBFolderView <PTSettingsKeyObserver, SBFolderBackgroundViewDelegate, UIGestureRecognizerDelegate, UIScribbleInteractionDelegate> {
    unsigned long long  _backgroundEffect;
    SBHFolderSettings * _folderSettings;
    UILongPressGestureRecognizer * _longPressGesture;
    UIPinchGestureRecognizer * _pinchGesture;
    SBFloatyFolderBackgroundClipView * _scrollClipView;
    UITapGestureRecognizer * _tapGesture;
    UIScribbleInteraction * _titleScribbleInteraction;
}

@property (nonatomic) unsigned long long backgroundEffect;
@property (nonatomic, readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIScribbleInteraction *titleScribbleInteraction;

+ (Class)_scrollViewClass;
+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (double)defaultCornerRadius;
+ (id)defaultIconLocation;

- (void).cxx_destruct;
- (void)_configureGesturesIfNecessary;
- (void)_didAddIconListView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForScalingView;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleOutsideTap:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2;
- (void)_layoutSubviews;
- (id)_newPageBackgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageBackgroundFrameForPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_rubberBandIntervalForOverscroll;
- (struct CGPoint { double x1; double x2; })_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 locationInView:(struct CGPoint { double x1; double x2; })arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7;
- (void)_setScrollViewNeedsToClipCorners:(bool)arg1;
- (bool)_shouldUseScrollableIconViewInteraction;
- (bool)_showsTitle;
- (bool)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)_titleFontSize;
- (void)_updateScalingViewFrame;
- (void)_updateScrollingState:(bool)arg1;
- (void)accessibilityReduceTransparencyDidChange:(id)arg1;
- (id)accessibilityTintColorForBackgroundView:(id)arg1;
- (unsigned long long)backgroundEffect;
- (double)cornerRadius;
- (void)dealloc;
- (void)enumeratePageBackgroundViewsUsingBlock:(id /* block */)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (id)floatyFolderConfiguration;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)legibilitySettingsForIconListViews;
- (bool)locationCountsAsInsideFolder:(struct CGPoint { double x1; double x2; })arg1;
- (bool)scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundEffect:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTitleScribbleInteraction:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)titleScribbleInteraction;
- (void)updateAccessibilityTintColors;
- (struct CGPoint { double x1; double x2; })visibleFolderRelativeImageCenterForIcon:(id)arg1;

@end
