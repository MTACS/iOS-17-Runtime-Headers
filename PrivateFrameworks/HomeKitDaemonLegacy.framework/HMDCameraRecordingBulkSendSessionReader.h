
@interface HMDCameraRecordingBulkSendSessionReader : HMFObject <HMFLogging, HMFTimerDelegate> {
    <HMDCameraRecordingBulkSendSessionReaderDelegate> * _delegate;
    HMDDataStreamFragmentAssembler * _fragmentChunkAssembler;
    NSString * _logIdentifier;
    HMFTimer * _readCallbackTimer;
    <HMDDataStreamBulkSendSession> * _session;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingBulkSendSessionReaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) <HMDDataStreamBulkSendSession> *session;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithWorkQueue:(id)arg1 session:(id)arg2 readCallbackTimer:(id)arg3 logIdentifier:(id)arg4;
- (id)initWithWorkQueue:(id)arg1 session:(id)arg2 readTimeout:(double)arg3 logIdentifier:(id)arg4;
- (id)logIdentifier;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stopWithReason:(unsigned short)arg1;
- (void)timerDidFire:(id)arg1;

@end
