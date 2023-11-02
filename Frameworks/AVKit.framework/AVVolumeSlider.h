
@interface AVVolumeSlider : UISlider <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem> {
    bool  _animatingVolumeChange;
    bool  _collapsed;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    bool  _hasAlternateAppearance;
    bool  _hasChangedLocationAtLeastOnce;
    bool  _hasFullScreenAppearance;
    bool  _included;
    AVLayoutItemAttributes * _layoutAttributes;
    bool  _removed;
    bool  _scrubsWhenTappedAnywhere;
    double  _thumbSize;
    UIImageView * _thumbView;
}

@property (getter=isAnimatingVolumeChange, nonatomic) bool animatingVolumeChange;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasChangedLocationAtLeastOnce;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, readonly) AVLayoutItemAttributes *layoutAttributes;
@property (getter=isRemoved, nonatomic) bool removed;
@property (nonatomic) bool scrubsWhenTappedAnywhere;
@property (readonly) Class superclass;
@property (setter=setThumbSize:, nonatomic) double thumbSize;
@property (nonatomic, retain) UIImageView *thumbView;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_endTracking;
- (bool)_shouldTrackTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateLayoutItem;
- (id)accessibilityLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasAlternateAppearance;
- (bool)hasChangedLocationAtLeastOnce;
- (bool)hasFullScreenAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 thumbSize:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAnimatingVolumeChange;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isRemoved;
- (id)layoutAttributes;
- (void)layoutAttributesDidChange;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)scrubsWhenTappedAnywhere;
- (void)setAnimatingVolumeChange:(bool)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasChangedLocationAtLeastOnce:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setScrubsWhenTappedAnywhere:(bool)arg1;
- (void)setThumbSize:(double)arg1;
- (void)setThumbView:(id)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (double)thumbSize;
- (id)thumbView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
