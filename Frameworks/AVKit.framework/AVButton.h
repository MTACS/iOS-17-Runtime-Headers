
@interface AVButton : UIButton <AVPlaybackControlsViewItem> {
    NSString * _accessibilityLabelOverride;
    UIFont * _activeFont;
    NSString * _activeImageName;
    UIFont * _alternateFullScreenFont;
    NSString * _alternateImageName;
    double  _alternateImagePadding;
    bool  _appliesTransformToImageViewWhenHighlighted;
    UIVisualEffectView * _backgroundEffectView;
    bool  _clampsHitRectInsetsWhenContainedInScrollableView;
    bool  _collapsed;
    bool  _disablesHighlightAnimation;
    bool  _disablesHighlightWhenLongPressed;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    double  _force;
    double  _forceThreshold;
    UIFont * _fullScreenFont;
    double  _fullscreenAlternateImagePadding;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    UIViewPropertyAnimator * _highlightAnimator;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hitRectInsets;
    double  _horizontalTranslationOfLongPress;
    NSString * _imageName;
    bool  _included;
    UIFont * _inlineFont;
    AVLayoutItemAttributes * _layoutAttributes;
    NSTimer * _longPressTimer;
    double  _maximumForceSinceTrackingBegan;
    AVMicaPackage * _micaPackage;
    double  _micaSnapshotAlpha;
    bool  _multipleTouchesEndsTracking;
    NSNumber * _previousHorizontalPositionOfLongPress;
    bool  _removed;
    bool  _secondGeneration;
    long long  _tintEffectStyle;
    double  _trackingStartTime;
    bool  _treatsForcePressAsLongPress;
    AVUserInteractionObserverGestureRecognizer * _userInteractionGestureRecognizer;
    bool  _usesBackgroundEffectViewForTextOnlyButtons;
    bool  _wasForcePressTriggered;
    bool  _wasLongPressed;
}

@property (nonatomic, retain) UIFont *activeFont;
@property (nonatomic, copy) NSString *activeImageName;
@property (nonatomic, retain) UIFont *alternateFullScreenFont;
@property (nonatomic, copy) NSString *alternateImageName;
@property (nonatomic) double alternateImagePadding;
@property (nonatomic) bool appliesTransformToImageViewWhenHighlighted;
@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic) bool clampsHitRectInsetsWhenContainedInScrollableView;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disablesHighlightWhenLongPressed;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) double force;
@property (nonatomic) double forceThreshold;
@property (nonatomic, retain) UIFont *fullScreenFont;
@property (nonatomic) double fullscreenAlternateImagePadding;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic) double horizontalTranslationOfLongPress;
@property (nonatomic, copy) NSString *imageName;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, retain) UIFont *inlineFont;
@property (nonatomic, readonly) AVLayoutItemAttributes *layoutAttributes;
@property (nonatomic) NSTimer *longPressTimer;
@property (nonatomic) double maximumForceSinceTrackingBegan;
@property (nonatomic, retain) AVMicaPackage *micaPackage;
@property (nonatomic) double micaSnapshotAlpha;
@property (nonatomic) bool multipleTouchesEndsTracking;
@property (nonatomic, retain) NSNumber *previousHorizontalPositionOfLongPress;
@property (getter=isRemoved, nonatomic) bool removed;
@property (getter=isSecondGeneration, nonatomic) bool secondGeneration;
@property (readonly) Class superclass;
@property (nonatomic) long long tintEffectStyle;
@property (nonatomic) double trackingStartTime;
@property (nonatomic) bool treatsForcePressAsLongPress;
@property (nonatomic, retain) AVUserInteractionObserverGestureRecognizer *userInteractionGestureRecognizer;
@property (nonatomic) bool usesBackgroundEffectViewForTextOnlyButtons;
@property (nonatomic) bool wasForcePressTriggered;
@property (nonatomic) bool wasLongPressed;

+ (id)buttonWithAccessibilityIdentifier:(id)arg1 accessibilityLabel:(id)arg2 isSecondGeneration:(bool)arg3;
+ (id)buttonWithAccessibilityIdentifier:(id)arg1 isSecondGeneration:(bool)arg2;
+ (id)customHighlightedAnimationButtonWithAccessibilityIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUserInteractionGestureRecognizer:(id)arg1;
- (double)_imageViewAlpha;
- (id)_preferredFont;
- (id)_preferredImageName;
- (struct CGSize { double x1; double x2; })_preferredLayoutSize;
- (void)_resetTrackedState;
- (void)_updateBackgroundEffectViewIsHidden;
- (void)_updateEdgeInsets;
- (void)_updateImageIfNeeded;
- (void)_updateLayoutItem;
- (void)_updateTintColorIfNeeded;
- (id)accessibilityLabel;
- (id)activeFont;
- (id)activeImageName;
- (id)alternateFullScreenFont;
- (id)alternateImageName;
- (double)alternateImagePadding;
- (bool)appliesTransformToImageViewWhenHighlighted;
- (id)backgroundEffectView;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)clampsHitRectInsetsWhenContainedInScrollableView;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)debugDescription;
- (bool)disablesHighlightWhenLongPressed;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (double)force;
- (double)forceThreshold;
- (id)fullScreenFont;
- (double)fullscreenAlternateImagePadding;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)highlightAnimator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (double)horizontalTranslationOfLongPress;
- (id)imageName;
- (id)inlineFont;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isRemoved;
- (bool)isSecondGeneration;
- (id)layoutAttributes;
- (void)layoutAttributesDidChange;
- (void)layoutSubviews;
- (id)longPressTimer;
- (double)maximumForceSinceTrackingBegan;
- (id)micaPackage;
- (double)micaSnapshotAlpha;
- (struct CGSize { double x1; double x2; })minimumSize;
- (bool)multipleTouchesEndsTracking;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previousHorizontalPositionOfLongPress;
- (void)setActiveFont:(id)arg1;
- (void)setActiveImageName:(id)arg1;
- (void)setAlternateFullScreenFont:(id)arg1;
- (void)setAlternateImageName:(id)arg1;
- (void)setAlternateImagePadding:(double)arg1;
- (void)setAppliesTransformToImageViewWhenHighlighted:(bool)arg1;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClampsHitRectInsetsWhenContainedInScrollableView:(bool)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setDisablesHighlightWhenLongPressed:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setForce:(double)arg1;
- (void)setForceThreshold:(double)arg1;
- (void)setFullScreenFont:(id)arg1;
- (void)setFullscreenAlternateImagePadding:(double)arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHighlightAnimator:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalTranslationOfLongPress:(double)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImageName:(id)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setInlineFont:(id)arg1;
- (void)setLongPressTimer:(id)arg1;
- (void)setMaximumForceSinceTrackingBegan:(double)arg1;
- (void)setMicaPackage:(id)arg1;
- (void)setMicaSnapshotAlpha:(double)arg1;
- (void)setMultipleTouchesEndsTracking:(bool)arg1;
- (void)setPreviousHorizontalPositionOfLongPress:(id)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setSecondGeneration:(bool)arg1;
- (void)setTintEffectStyle:(long long)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTrackingStartTime:(double)arg1;
- (void)setTreatsForcePressAsLongPress:(bool)arg1;
- (void)setUserInteractionGestureRecognizer:(id)arg1;
- (void)setUsesBackgroundEffectViewForTextOnlyButtons:(bool)arg1;
- (void)setWasForcePressTriggered:(bool)arg1;
- (void)setWasLongPressed:(bool)arg1;
- (long long)tintEffectStyle;
- (double)trackingStartTime;
- (bool)treatsForcePressAsLongPress;
- (id)userInteractionGestureRecognizer;
- (bool)usesBackgroundEffectViewForTextOnlyButtons;
- (bool)wasForcePressTriggered;
- (bool)wasLongPressed;
- (void)willMoveToWindow:(id)arg1;

@end
