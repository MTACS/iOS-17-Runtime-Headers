
@interface UARPHeySiriModelVoiceAssist : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol> {
    UARPSuperBinaryAsset * _asset;
    NSURL * _fallbackModelDataURL;
    NSURL * _fallbackModelMetaDataURL;
    NSObject<OS_os_log> * _log;
    NSURL * _modelDataURL;
    NSURL * _modelMetaDataURL;
    UARPSuperBinaryAssetPayload * _payloadFallbackModel;
    UARPSuperBinaryAssetPayload * _payloadModel;
    NSURL * _superBinaryMetaDataURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tag;

- (void).cxx_destruct;
- (void)currentHeySiriModel:(id)arg1 fallbackModel:(id)arg2 error:(id)arg3;
- (id)generateAsset:(id*)arg1;
- (id)init;
- (bool)processDynamicAsset:(id*)arg1;

@end
