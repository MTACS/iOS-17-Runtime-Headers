
@interface CSAttSiriAttentionAssetsStatusProvider : NSObject {
    <CSAttSiriAttentionAssetsStatusProviderDelegate> * _delegate;
}

@property (nonatomic) <CSAttSiriAttentionAssetsStatusProviderDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateWithAsset:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithMitigationAssetHandler:(id)arg1;
- (void)mitigationAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
