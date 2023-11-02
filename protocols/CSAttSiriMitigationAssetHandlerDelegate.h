
@protocol CSAttSiriMitigationAssetHandlerDelegate <NSObject>

@required

- (void)mitigationAssetHandler:(CSAttSiriMitigationAssetHandler *)arg1 endpointId:(NSString *)arg2 didChangeCachedAsset:(CSAsset *)arg3;

@end
