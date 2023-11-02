
@protocol HMDCameraClipOperationDataSource <NSObject>

@required

- (void)appendData:(void *)arg1 toStreamingAssetAppendContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, CKStreamingAssetAppendContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKStreamingAsset *, NSError *, void*
- (double)operationTimeout;
- (void)submitOperationEvent:(HMDCameraRecordingUploadOperationEvent *)arg1;
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end
