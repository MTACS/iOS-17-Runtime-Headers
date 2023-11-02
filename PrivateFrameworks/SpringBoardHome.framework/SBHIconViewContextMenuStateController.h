
@interface SBHIconViewContextMenuStateController : NSObject {
    NSHashTable * _iconViews;
    NSHashTable * _iconViewsAnimatingContextMenues;
    NSHashTable * _iconViewsPresentingContextMenues;
    NSMutableArray * _pendingIconAnimationCompletionBlocks;
    NSMutableSet * _presentedWidgetsBundleIdentifiers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_firePendingIconAnimationBlocks;
- (bool)areAnyIconViewContextMenusAnimating;
- (bool)areAnyIconViewContextMenusShowing;
- (void)containerViewDidScrollHiddenIconViewAway:(id)arg1;
- (void)dismissAppIconForceTouchControllers:(id /* block */)arg1;
- (void)earlyTerminateAnyContextMenuAnimations;
- (void)iconViewDidAnimateContextMenu:(id)arg1;
- (void)iconViewWillAnimateContextMenu:(id)arg1;
- (void)iconViewWillDismissContextMenu:(id)arg1;
- (void)iconViewWillPresentContextMenu:(id)arg1;
- (id)init;
- (void)noteFolderControllerWillClose:(id)arg1;
- (void)performAfterContextMenuAnimationsHaveCompleted:(id /* block */)arg1;
- (void)registerIconView:(id)arg1;
- (void)unregisterIconView:(id)arg1;

@end
