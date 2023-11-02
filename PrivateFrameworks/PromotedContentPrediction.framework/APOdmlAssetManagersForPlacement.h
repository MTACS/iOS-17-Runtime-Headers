
@interface APOdmlAssetManagersForPlacement : NSObject {
    APOdmlAssetManager * _counterfactualAssetManager;
    APOdmlAssetManager * _runtimeAssetManager;
}

@property (nonatomic, readonly) APOdmlAssetManager *counterfactualAssetManager;
@property (nonatomic, readonly) APOdmlAssetManager *runtimeAssetManager;

- (void).cxx_destruct;
- (id)assetManagerForType:(unsigned long long)arg1;
- (id)counterfactualAssetManager;
- (id)initWithPlacementType:(unsigned long long)arg1 trialClient:(id)arg2;
- (id)runtimeAssetManager;

@end
