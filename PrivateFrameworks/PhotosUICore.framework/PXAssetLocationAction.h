
@interface PXAssetLocationAction : PXAssetsAction {
    NSString * _analyticsActionString;
    NSString * _analyticsPlaceLevelString;
    id /* block */  _onUnitChange;
    NSDictionary * _originalLocations;
}

@property (nonatomic, readonly) NSString *analyticsActionString;
@property (nonatomic, readonly) NSString *analyticsPlaceLevelString;
@property (nonatomic, copy) id /* block */ onUnitChange;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_loadOriginalLocationsIfNeeded;
- (void)_performChangesWithLocationProvider:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestRevGeocoding;
- (void)_sendAnalyticsEvent;
- (id)_undoLocationForAsset:(id)arg1;
- (id)analyticsActionString;
- (id)analyticsPlaceLevelString;
- (id)locationForAsset:(id)arg1 shifted:(bool*)arg2;
- (id /* block */)onUnitChange;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setOnUnitChange:(id /* block */)arg1;

@end
