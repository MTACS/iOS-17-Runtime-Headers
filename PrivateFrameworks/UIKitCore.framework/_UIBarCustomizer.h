
@interface _UIBarCustomizer : NSObject <UIDragInteractionDelegate, UIDropInteractionDelegate> {
    _UIBarCustomizationSession * __activeSession;
    unsigned long long  __dropIndex;
    NSMutableArray * __visibleItems;
    _UIBarCustomizationContainerView * _containerView;
    <_UIBarCustomizerDelegate> * _delegate;
    UIView * _dimmingView;
    UIDragInteraction * _dragInteraction;
    NSMutableArray * _ellipsisDotViews;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialSourceFrame;
    bool  _isActive;
    id  _keyboardSuppressionAssertion;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragLocation;
    unsigned long long  _overflowItemCount;
    _UIBarCustomizationItemReservoirView * _reservoir;
    UIScrollView * _visibleItemScrollView;
    bool  _wasReset;
}

@property (nonatomic, retain) _UIBarCustomizationSession *_activeSession;
@property (nonatomic) unsigned long long _dropIndex;
@property (nonatomic, retain) NSMutableArray *_visibleItems;
@property (nonatomic, retain) _UIBarCustomizationContainerView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <_UIBarCustomizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) UIDragInteraction *dragInteraction;
@property (nonatomic, retain) NSMutableArray *ellipsisDotViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialSourceFrame;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, retain) id keyboardSuppressionAssertion;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDragLocation;
@property (nonatomic) unsigned long long overflowItemCount;
@property (nonatomic, retain) _UIBarCustomizationItemReservoirView *reservoir;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIScrollView *visibleItemScrollView;
@property (nonatomic) bool wasReset;

- (void).cxx_destruct;
- (id)_activeSession;
- (void)_animateDropOrCancelForItem:(id)arg1 animator:(id)arg2 isCancel:(bool)arg3;
- (double)_dragInteraction:(id)arg1 delayForLiftBeginningAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)_dragItemsAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_dropIndex;
- (void)_handleDimmingViewTap:(id)arg1;
- (int)_overflowItemBucketSize;
- (void)_reflow;
- (void)_reflowAnimatedWithAlongsideActions:(id /* block */)arg1;
- (void)_setActive:(bool)arg1;
- (void)_updateDebugUI;
- (id)_visibleItems;
- (void)beginWithSession:(id)arg1;
- (id)containerView;
- (id)delegate;
- (id)dimmingView;
- (id)dragInteraction;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)ellipsisDotViews;
- (void)end;
- (id)initWithDelegate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialSourceFrame;
- (void)invalidateLayout;
- (bool)isActive;
- (id)keyboardSuppressionAssertion;
- (struct CGPoint { double x1; double x2; })lastDragLocation;
- (unsigned long long)overflowItemCount;
- (id)reservoir;
- (void)setContainerView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDragInteraction:(id)arg1;
- (void)setEllipsisDotViews:(id)arg1;
- (void)setInitialSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardSuppressionAssertion:(id)arg1;
- (void)setLastDragLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverflowItemCount:(unsigned long long)arg1;
- (void)setReservoir:(id)arg1;
- (void)setVisibleItemScrollView:(id)arg1;
- (void)setWasReset:(bool)arg1;
- (void)set_activeSession:(id)arg1;
- (void)set_dropIndex:(unsigned long long)arg1;
- (void)set_visibleItems:(id)arg1;
- (id)visibleItemScrollView;
- (bool)wasReset;

@end
