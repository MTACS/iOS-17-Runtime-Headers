
@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureCameraCalibrationDataOutputDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureMetadataOutputObjectsDelegateInternal, AVCapturePointCloudDataOutputDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureVisionDataOutputDelegate> {
    AVCaptureDataOutputSynchronizerInternal * _internal;
}

@property (readonly, retain) NSArray *dataOutputs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVCaptureDataOutputSynchronizerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_adjustSynchronizedDataTimestamps;
- (bool)_allFollowerSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanLeaderTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (int)_computedLeaderSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)_dispatchRipenedSynchronizedData;
- (void)_dispatchSynchronizedDataWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_earliestFollowerSynchronizedDataQueueTimestamp;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)cameraCalibrationDataOutput:(id)arg1 didDropCameraCalibrationDataAtTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 connection:(id)arg3 reason:(long long)arg4;
- (void)cameraCalibrationDataOutput:(id)arg1 didOutputCameraCalibrationData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjectCollections:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)dataOutputs;
- (void)dealloc;
- (id)delegate;
- (id)delegateCallbackQueue;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;
- (id)initWithDataOutputs:(id)arg1;
- (void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 connection:(id)arg3 reason:(long long)arg4;
- (void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer { }*)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;

@end
