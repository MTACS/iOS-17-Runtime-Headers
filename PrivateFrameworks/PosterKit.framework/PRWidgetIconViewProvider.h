
@interface PRWidgetIconViewProvider : NSObject <SBIconViewDelegate, SBIconViewObserver, SBIconViewProviding, SBReusableViewMapDelegate> {
    SBIconDragManager * _dragManager;
    SBReusableViewMap * _iconViewMap;
    <SBRecycledViewsContainerProviding> * _recycledViewsContainerProvider;
    bool  _useMaterialBackground;
    bool  _widgetInteractionDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBIconDragManager *dragManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBRecycledViewsContainerProviding> *recycledViewsContainerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useMaterialBackground;
@property (getter=isWidgetInteractionDisabled, nonatomic, readonly) bool widgetInteractionDisabled;

- (void).cxx_destruct;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)customImageViewControllerForIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)dragItemsForIconView:(id)arg1;
- (id)dragManager;
- (bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (void)iconView:(id)arg1 didChangeCustomImageViewController:(id)arg2;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4;
- (void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)iconViewMap;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (id)initWithRecycledViewsContainerProvider:(id)arg1 widgetInteractionDisabled:(bool)arg2 useMaterialBackground:(bool)arg3;
- (bool)isIconViewRecycled:(id)arg1;
- (bool)isWidgetInteractionDisabled;
- (void)recycleIconView:(id)arg1;
- (id)recycledViewsContainerProvider;
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;
- (void)setDragManager:(id)arg1;
- (void)setRecycledViewsContainerProvider:(id)arg1;
- (bool)useMaterialBackground;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;

@end
