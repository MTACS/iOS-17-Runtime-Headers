
@protocol PXWidgetCompositionElementDelegate <NSObject>

@required

- (NSUndoManager *)elementUndoManager:(PXWidgetCompositionElement *)arg1;
- (NSObject<PXAnonymousViewController> *)elementViewController:(PXWidgetCompositionElement *)arg1;

@optional

- (bool)element:(PXWidgetCompositionElement *)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)element:(PXWidgetCompositionElement *)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 withTransitionType:(long long)arg3;
- (<PXPresentationEnvironment> *)presentationEnvironmentForElement:(PXWidgetCompositionElement *)arg1;

@end
