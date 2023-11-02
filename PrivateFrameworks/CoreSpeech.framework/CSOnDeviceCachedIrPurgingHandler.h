
@interface CSOnDeviceCachedIrPurgingHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)cleanUpCachedIrDir;
- (void)cleanUpPreviousBuildBnnsIrInCachedIrDir:(id)arg1;
- (void)cleanUpWithCachedIrDir:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)purgeCachedIrForTrialAssetExcludingCurrentAsset:(id)arg1 cachedIrDir:(id)arg2;
- (void)startRegistration;
- (void)voiceTriggerAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;

@end
