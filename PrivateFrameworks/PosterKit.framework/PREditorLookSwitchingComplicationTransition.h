
@interface PREditorLookSwitchingComplicationTransition : NSObject {
    CSCachingVibrancyTransitionProvider * _cachingVibrancyTransitionProvider;
    BSUIVibrancyConfiguration * _fromVibrancyConfiguration;
    BSUIVibrancyConfiguration * _toVibrancyConfiguration;
    PREditorRootViewController * _viewController;
}

@property (nonatomic, retain) CSCachingVibrancyTransitionProvider *cachingVibrancyTransitionProvider;
@property (nonatomic, retain) BSUIVibrancyConfiguration *fromVibrancyConfiguration;
@property (nonatomic, retain) BSUIVibrancyConfiguration *toVibrancyConfiguration;
@property (nonatomic) PREditorRootViewController *viewController;

- (void).cxx_destruct;
- (id)cachingVibrancyTransitionProvider;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)fromVibrancyConfiguration;
- (id)initWithFromVibrancyConfiguration:(id)arg1 toVibrancyConfiguration:(id)arg2 viewController:(id)arg3 cachingVibrancyTransitionProvider:(id)arg4;
- (void)setCachingVibrancyTransitionProvider:(id)arg1;
- (void)setFromVibrancyConfiguration:(id)arg1;
- (void)setToVibrancyConfiguration:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)toVibrancyConfiguration;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewController;

@end
