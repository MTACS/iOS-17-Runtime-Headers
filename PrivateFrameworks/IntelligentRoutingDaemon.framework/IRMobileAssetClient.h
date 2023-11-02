
@interface IRMobileAssetClient : NSObject {
    MAAutoAssetSelector * _currentAssetSelector;
}

@property (nonatomic, retain) MAAutoAssetSelector *currentAssetSelector;

- (void).cxx_destruct;
- (bool)_createInterestInAssetType:(id)arg1 withAssetSpecifier:(id)arg2;
- (id)currentAssetSelector;
- (id)getLockedAssetVersion;
- (id)init;
- (id)lockAssetContent;
- (void)setCurrentAssetSelector:(id)arg1;
- (void)unlockAssetContent;

@end
