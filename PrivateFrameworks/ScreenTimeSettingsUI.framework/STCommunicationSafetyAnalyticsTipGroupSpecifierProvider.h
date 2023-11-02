
@interface STCommunicationSafetyAnalyticsTipGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _communicationSafetyAnalyticsTipSpecifer;
    UIViewController * _rootViewController;
}

@property (retain) PSSpecifier *communicationSafetyAnalyticsTipSpecifer;
@property UIViewController *rootViewController;

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;

- (void).cxx_destruct;
- (void)_acknowledgeTip;
- (void)_setCommunicationSafetyAnalyticsTip;
- (bool)_shouldShowAnalyticsTip;
- (void)_showCommunicationSafetyAnalyticsTipIfNeeded;
- (id)communicationSafetyAnalyticsTipSpecifer;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)rootViewController;
- (void)setCommunicationSafetyAnalyticsTipSpecifer:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setRootViewController:(id)arg1;

@end
