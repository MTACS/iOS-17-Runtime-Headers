
@interface _UIPresentationControllerNullVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) _UISheetPresentationMetrics *defaultSheetMetrics;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)defaultConcretePresentationStyleForViewController:(id)arg1;
- (long long)defaultConcreteTransitionStyleForViewController:(id)arg1;
- (id)defaultSheetMetrics;
- (id)defaultStyleForPresentationController:(id)arg1;
- (Class)presentationControllerClassForModalPresentationStyle:(long long)arg1 inIdiom:(long long)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 inIdiom:(long long)arg2;
- (id)styleForAlertPresentationController:(id)arg1;
- (id)styleForPopoverPresentationController:(id)arg1;
- (id)styleForRootPresentationController:(id)arg1;
- (id)styleForSearchPresentationController:(id)arg1;
- (id)styleForSheetPresentationController:(id)arg1;

@end
