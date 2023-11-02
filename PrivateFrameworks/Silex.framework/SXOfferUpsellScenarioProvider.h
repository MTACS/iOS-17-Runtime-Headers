
@interface SXOfferUpsellScenarioProvider : NSObject <SXOfferUpsellScenarioProviding> {
    long long  _offerUpsellScenario;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long offerUpsellScenario;
@property (readonly) Class superclass;

- (void)addObserver:(id)arg1;
- (id)init;
- (id)initWithOfferUpsellScenario:(long long)arg1;
- (long long)offerUpsellScenario;
- (void)removeObserver:(id)arg1;

@end
