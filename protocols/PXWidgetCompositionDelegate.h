
@protocol PXWidgetCompositionDelegate <NSObject>

@required

- (NSUndoManager *)widgetComposition:(PXWidgetComposition *)arg1 undoManagerForWidget:(id <PXWidget>)arg2;
- (NSObject<PXAnonymousViewController> *)widgetComposition:(PXWidgetComposition *)arg1 viewControllerHostingWidget:(id <PXWidget>)arg2;

@optional

- (<PXPresentationEnvironment> *)presentationEnvironmentForWidgetComposition:(PXWidgetComposition *)arg1;
- (void)widgetComposition:(PXWidgetComposition *)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id <NSObject>)arg2;
- (long long)widgetComposition:(PXWidgetComposition *)arg1 loadingPriorityForWidget:(id <PXWidget>)arg2;
- (bool)widgetComposition:(PXWidgetComposition *)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)widgetComposition:(PXWidgetComposition *)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id <PXWidget>)arg2;
- (bool)widgetComposition:(PXWidgetComposition *)arg1 widget:(id <PXWidget>)arg2 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg3 withTransitionType:(long long)arg4;
- (void)widgetComposition:(PXWidgetComposition *)arg1 widgetHasLoadedContentDataDidChange:(id <PXWidget>)arg2;
- (bool)widgetCompositionHasContentAbove:(PXWidgetComposition *)arg1;

@end
