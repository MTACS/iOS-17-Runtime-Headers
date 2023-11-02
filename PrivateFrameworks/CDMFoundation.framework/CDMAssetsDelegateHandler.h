
@interface CDMAssetsDelegateHandler : NSObject {
    NSArray * _assetSetNames;
    NSMutableDictionary * _assetsAvailabilities;
    <CDMTrialAssetsDelegate> * _delegate;
}

- (void).cxx_destruct;
- (bool)assetsAvailableForAssetSet:(id)arg1 forLocale:(id)arg2;
- (bool)assetsUnavailableForAssetSet:(id)arg1;
- (id)initWithAssetsDelegate:(id)arg1 forAssetSets:(id)arg2;
- (void)notifyDelegate;

@end
