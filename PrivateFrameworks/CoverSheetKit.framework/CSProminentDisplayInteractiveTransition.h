
@interface CSProminentDisplayInteractiveTransition : NSObject <CSProminentDisplayTransitioning> {
    UIFont * _baseFont;
    CSCachingVibrancyTransitionProvider * _cachingVibrancyTransitionProvider;
    BSUIVibrancyConfiguration * _fromVibrancyConfiguration;
    BSUIVibrancyConfiguration * _toVibrancyConfiguration;
    CSProminentDisplayViewController * _viewController;
}

@property (nonatomic, readonly) UIFont *baseFont;
@property (nonatomic, retain) CSCachingVibrancyTransitionProvider *cachingVibrancyTransitionProvider;
@property (nonatomic, readonly, copy) BSUIVibrancyConfiguration *fromVibrancyConfiguration;
@property (nonatomic, readonly, copy) BSUIVibrancyConfiguration *toVibrancyConfiguration;
@property (nonatomic) CSProminentDisplayViewController *viewController;

- (void).cxx_destruct;
- (id)baseFont;
- (id)cachingVibrancyTransitionProvider;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)fromVibrancyConfiguration;
- (id)initWithViewController:(id)arg1 baseFont:(id)arg2 fromVibrancyConfiguration:(id)arg3 toVibrancyConfiguration:(id)arg4;
- (id)initWithViewController:(id)arg1 baseFont:(id)arg2 fromVibrancyConfiguration:(id)arg3 toVibrancyConfiguration:(id)arg4 cachingVibrancyTransitionProvider:(id)arg5;
- (void)setCachingVibrancyTransitionProvider:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)toVibrancyConfiguration;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewController;

@end
