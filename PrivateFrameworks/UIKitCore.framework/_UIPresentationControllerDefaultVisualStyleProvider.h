
@interface _UIPresentationControllerDefaultVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding> {
    _UIPresentationControllerNullVisualStyleProvider * _fallbackProvider;
    NSMutableDictionary * _providerByIdiom;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) _UISheetPresentationMetrics *defaultSheetMetrics;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIPresentationControllerNullVisualStyleProvider *fallbackProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *providerByIdiom;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_providerForIdiom:(long long)arg1;
- (id)_providerForPresentationController:(id)arg1;
- (id)_providerForViewController:(id)arg1;
- (long long)defaultConcretePresentationStyleForViewController:(id)arg1;
- (long long)defaultConcreteTransitionStyleForViewController:(id)arg1;
- (id)defaultSheetMetrics;
- (id)defaultStyleForPresentationController:(id)arg1;
- (id)fallbackProvider;
- (Class)presentationControllerClassForModalPresentationStyle:(long long)arg1 inIdiom:(long long)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 inIdiom:(long long)arg2;
- (id)providerByIdiom;
- (void)registerVisualStyleProvider:(id)arg1 forIdiom:(long long)arg2;
- (void)setFallbackProvider:(id)arg1;
- (void)setProviderByIdiom:(id)arg1;
- (id)styleForAlertPresentationController:(id)arg1;
- (id)styleForPopoverPresentationController:(id)arg1;
- (id)styleForRootPresentationController:(id)arg1;
- (id)styleForSearchPresentationController:(id)arg1;
- (id)styleForSheetPresentationController:(id)arg1;

@end
