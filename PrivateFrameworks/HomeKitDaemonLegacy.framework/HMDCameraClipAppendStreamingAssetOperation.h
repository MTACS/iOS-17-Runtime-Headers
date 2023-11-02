
@interface HMDCameraClipAppendStreamingAssetOperation : HMDCameraClipOperation <HMFTimerDelegate> {
    NSData * _data;
    HMCameraClipEncryptionManager * _encryptionManager;
    HMDCameraClipSegmentMetadata * _metadata;
    HMFTimer * _retryTimer;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) unsigned long long hash;
@property (readonly) HMDCameraClipSegmentMetadata *metadata;
@property (retain) HMFTimer *retryTimer;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)metadataPropertyName;
+ (bool)shouldRetry;
+ (id)streamingAssetPropertyName;

- (void).cxx_destruct;
- (id)_retryDelayForError:(id)arg1;
- (id)_updateClipModel:(id)arg1 usingStreamingAsset:(id)arg2;
- (id)attributeDescriptions;
- (void)cancelWithError:(id)arg1;
- (id)data;
- (id)encryptionManager;
- (void)finish;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 dataSource:(id)arg6;
- (void)main;
- (id)metadata;
- (id)retryTimer;
- (void)setRetryTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
