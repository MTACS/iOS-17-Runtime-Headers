
@interface TPSAppStoreRegionValidation : TPSRegionsValidation

- (id)getCurrentState;
- (void)getCurrentStateWithCompletion:(id /* block */)arg1;
- (bool)hasStoreFrontRegionPrefix:(id)arg1 fromRegions:(id)arg2;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
