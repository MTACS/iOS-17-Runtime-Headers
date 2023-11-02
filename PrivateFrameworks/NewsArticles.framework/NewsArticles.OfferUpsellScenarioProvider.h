
@interface NewsArticles.OfferUpsellScenarioProvider : NSObject <SXOfferUpsellScenarioProviding> {
    void didProcessInitialOffer;
    void observers;
    void offerManager;
}

@property (nonatomic, readonly) long long offerUpsellScenario;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (long long)offerUpsellScenario;
- (void)removeObserver:(id)arg1;

@end
