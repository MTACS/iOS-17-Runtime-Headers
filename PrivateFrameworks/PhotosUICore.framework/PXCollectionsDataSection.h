
@interface PXCollectionsDataSection : PXDataSection

- (long long)countForCollection:(id)arg1;
- (id)existingAssetsFetchResultAtIndex:(long long)arg1;
- (long long)indexOfCollection:(id)arg1;
- (id)init;
- (id)initWithCollectionsDataSource:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1 lockStatePerCollection:(id)arg2;
- (id)initWithDisplayCollection:(id)arg1;
- (id)initWithDisplayCollection:(id)arg1 lockState:(unsigned long long)arg2;
- (unsigned long long)lockStateForCollection:(id)arg1;

@end
