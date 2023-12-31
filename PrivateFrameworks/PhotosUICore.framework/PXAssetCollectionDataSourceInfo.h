
@interface PXAssetCollectionDataSourceInfo : NSObject {
    bool  _UUIDFilterHidesSomeAssets;
    bool  _explicitlyDisableFilters;
}

@property (setter=_setUUIDFilterHidesSomeAssets:, nonatomic) bool UUIDFilterHidesSomeAssets;
@property (setter=_setExplicitlyDisableFilters:, nonatomic) bool explicitlyDisableFilters;

- (bool)UUIDFilterHidesSomeAssets;
- (void)_setExplicitlyDisableFilters:(bool)arg1;
- (void)_setUUIDFilterHidesSomeAssets:(bool)arg1;
- (bool)explicitlyDisableFilters;

@end
