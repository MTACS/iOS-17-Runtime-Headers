
@interface CAMControlDrawerMenuButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton> {
    UIImageView * __accessoryBackgroundView;
    NSArray * __cachedMenuItems;
    UIView * __highlightedView;
    NSMutableArray * __itemLabels;
    bool  __needsLoadMenuItems;
    bool  __touchInTrackedView;
    unsigned long long  __trackedItemIndex;
    bool  __trackingExpansionToggle;
    <CAMControlDrawerMenuButtonDelegate> * _delegate;
    bool  _expanded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expansionInsets;
}

@property (nonatomic, readonly) UIImageView *_accessoryBackgroundView;
@property (setter=_setCachedMenuItems:, nonatomic, retain) NSArray *_cachedMenuItems;
@property (setter=_setHighlightedView:, nonatomic, retain) UIView *_highlightedView;
@property (nonatomic, readonly) NSMutableArray *_itemLabels;
@property (setter=_setNeedsLoadMenuItems:, nonatomic) bool _needsLoadMenuItems;
@property (getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:, nonatomic) bool _touchInTrackedView;
@property (setter=_setTrackedItemIndex:, nonatomic) unsigned long long _trackedItemIndex;
@property (getter=_isTrackingExpansionToggle, setter=_setTrackingExpansionToggle:, nonatomic) bool _trackingExpansionToggle;
@property (nonatomic) <CAMControlDrawerMenuButtonDelegate> *delegate;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expansionInsets;

+ (id)_backgroundImage;

- (void).cxx_destruct;
- (id)_accessoryBackgroundView;
- (id)_cachedMenuItems;
- (id)_highlightedView;
- (unsigned long long)_indexOfItemToTrackForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isTouchInTrackedView;
- (bool)_isTrackingExpansionToggle;
- (id)_itemLabels;
- (void)_loadMenuItemsIfNeeded;
- (bool)_needsLoadMenuItems;
- (void)_setCachedMenuItems:(id)arg1;
- (void)_setExpanded:(bool)arg1 animated:(bool)arg2 shouldNotify:(bool)arg3;
- (void)_setHighlightedView:(id)arg1;
- (void)_setNeedsLoadMenuItems:(bool)arg1;
- (void)_setTouchInTrackedView:(bool)arg1;
- (void)_setTrackedItemIndex:(unsigned long long)arg1;
- (void)_setTrackingExpansionToggle:(bool)arg1;
- (bool)_shouldTrackView:(id)arg1 forTouchAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)_trackedItemIndex;
- (void)_updateHighlightedView;
- (void)_updateLabels;
- (void)_updateSubviewAlphas;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)didChangeContentSize;
- (void)didSelectMenuItem:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expansionInsets;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isMenuItemSelected:(id)arg1;
- (void)layoutSubviews;
- (id)loadMenuItems;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setExpansionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNeedsLoadMenuItems;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (bool)shouldScaleImageWhileHighlighted;
- (void)updateLabelsIfNeeded;

@end
