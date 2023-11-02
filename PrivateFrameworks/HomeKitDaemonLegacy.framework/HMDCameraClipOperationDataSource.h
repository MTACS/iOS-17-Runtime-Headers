
@interface HMDCameraClipOperationDataSource : HMFObject <HMDCameraClipOperationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double operationTimeout;
@property (readonly) Class superclass;

- (void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(id /* block */)arg3;
- (double)operationTimeout;
- (void)submitOperationEvent:(id)arg1;
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end
