
@interface CDMAssetConfigItem : NSObject {
    NSDictionary * _assetFolderNamesByTrialFactorNames;
}

@property (nonatomic, readonly) NSDictionary *assetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)assetFolderNamesByTrialFactorNames;
- (id)getAssetFolderNamesByTrialFactorNames;
- (id)initWithAssetFolderNamesByTrialFactorNames:(id)arg1;

@end
