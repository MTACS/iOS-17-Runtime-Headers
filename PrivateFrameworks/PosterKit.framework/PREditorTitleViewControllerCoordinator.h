
@interface PREditorTitleViewControllerCoordinator : NSObject {
    CSCachingVibrancyTransitionProvider * _cachingProvider;
    NSString * _role;
    NSMutableDictionary * _titleViewControllersForLook;
    PREditingLook * _transitionInProgressLook;
}

@property (nonatomic, retain) CSCachingVibrancyTransitionProvider *cachingProvider;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, retain) NSMutableDictionary *titleViewControllersForLook;
@property (nonatomic, retain) PREditingLook *transitionInProgressLook;

+ (Class)titleViewControllerClassForRole:(id)arg1;

- (void).cxx_destruct;
- (id)beginInteractiveTransitionForStartingLook:(id)arg1 toBaseFont:(id)arg2 vibrancyConfiguration:(id)arg3;
- (id)cachingProvider;
- (id)cachingVibrancyProviderForLook:(id)arg1;
- (void)enumerateTimeViewControllersUsingBlock:(id /* block */)arg1;
- (id)initWithRole:(id)arg1;
- (void)invalidateInteractiveTransition;
- (void)prepareInteractiveTransitionForStartingLook:(id)arg1;
- (void)reloadData;
- (id)role;
- (void)setCachingProvider:(id)arg1;
- (void)setTitleViewControllersForLook:(id)arg1;
- (void)setTransitionInProgressLook:(id)arg1;
- (id)titleViewControllerForLook:(id)arg1;
- (id)titleViewControllersForLook;
- (id)transitionInProgressLook;
- (void)updateLookWithIdentifier:(id)arg1 withLook:(id)arg2;

@end
