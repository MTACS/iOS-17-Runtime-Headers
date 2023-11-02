
@interface UIInputWindowControllerHosting : NSObject {
    unsigned long long  _currentState;
    int  _extraHostsRequired;
    NSMutableArray * _hostingItems;
    UIInputWindowController * _owner;
    bool  _requiresConstraintUpdate;
}

@property (nonatomic, readonly, retain) NSArray *allHostingItems;
@property (nonatomic) int extraHostsRequired;
@property (nonatomic) UIInputWindowController *owner;
@property (nonatomic) bool requiresConstraintUpdate;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inputViewPadding;
- (void)_updateBackdropViews;
- (id)allHostingItems;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputViewEdgeConstraints;
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;
- (id)expectedPlacementForHost:(id)arg1;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (int)extraHostsRequired;
- (bool)host:(id)arg1 isForPurpose:(unsigned long long)arg2;
- (unsigned long long)indexOfHost:(id)arg1;
- (id)initWithHost:(id)arg1;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (id)itemForPurpose:(unsigned long long)arg1;
- (void)layoutIfNeeded;
- (id)owner;
- (void)performForInputAccessoryBackdropViews:(id /* block */)arg1;
- (id)placementForHost:(id)arg1;
- (void)reloadForPlacementForInputViewSet:(id)arg1;
- (void)removeAllAnimations;
- (void)removeInputAssistantHostView;
- (void)removeMatchMoveAnimationIfNeeded;
- (bool)requiresConstraintUpdate;
- (void)resetBackdropHeight;
- (void)resetInputViewVisibility;
- (id)scrollTrackingView;
- (void)setExtraHostsRequired:(int)arg1;
- (void)setNeedsLayout;
- (void)setOwner:(id)arg1;
- (void)setRequiresConstraintUpdate:(bool)arg1;
- (id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2;
- (void)unloadForPlacement;
- (void)updateConstraintInsets;
- (void)updateEmptyHeightConstraint;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (bool)useCrescendoHostingItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
