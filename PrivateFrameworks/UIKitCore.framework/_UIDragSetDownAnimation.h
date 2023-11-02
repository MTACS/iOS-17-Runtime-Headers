
@interface _UIDragSetDownAnimation : NSObject <_UIDragSetDownItemAnimationDelegate> {
    id /* block */  _completion;
    UIWindow * _coordinateContainerWindow;
    CADisplayLink * _displayLink;
    bool  _hasBegun;
    NSArray * _itemAnimations;
    UIViewPropertyAnimator * _remainingItemsPropertyAnimator;
    _UIDragSetDownAnimationWindow * _window;
}

@property (nonatomic, retain) UIWindow *coordinateContainerWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWindow *window;

+ (bool)canAnimateItems:(id)arg1 forSource:(bool)arg2 policyDriven:(bool)arg3;
+ (id /* block */)defaultDropAnimationForPlatterView:(id)arg1;
+ (id /* block */)defaultMultiItemAnimationForPlatterView:(id)arg1;
+ (id)defaultSetDownPropertyAnimator;
+ (id /* block */)defaultSingleItemAnimationForPlatterView:(id)arg1;

- (void).cxx_destruct;
- (void)_allItemAnimationsCompleted;
- (void)begin;
- (id)coordinateContainerWindow;
- (id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(bool)arg3 policyDriven:(bool)arg4 completion:(id /* block */)arg5;
- (void)itemAnimationCompleted:(id)arg1;
- (void)itemAnimationReachedTarget:(id)arg1;
- (void)previewContainerAnimationDidCompleteForDragItem:(id)arg1;
- (void)setCoordinateContainerWindow:(id)arg1;
- (void)updateInFlightAnimationTick:(id)arg1;
- (void)updateTargetedDragPreview:(id)arg1 forDragItem:(id)arg2;
- (void)updateVisibleDroppedItems:(id)arg1;
- (id)window;

@end
