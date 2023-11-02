
@protocol CSVoiceTriggerAssetHandlerDelegate <NSObject>

@required

- (void)voiceTriggerAssetHandler:(CSVoiceTriggerAssetHandler *)arg1 endpointId:(NSString *)arg2 didChangeCachedAsset:(CSAsset *)arg3;

@end
