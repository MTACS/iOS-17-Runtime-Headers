
@protocol SXOfferUpsellScenarioProviding <NSObject>

@required

- (void)addObserver:(id <SXOfferUpsellScenarioObserving>)arg1;
- (long long)offerUpsellScenario;
- (void)removeObserver:(id <SXOfferUpsellScenarioObserving>)arg1;

@end
