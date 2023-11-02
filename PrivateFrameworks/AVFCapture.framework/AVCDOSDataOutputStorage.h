
@interface AVCDOSDataOutputStorage : NSObject {
    AVCaptureOutput<AVCaptureDataOutputDelegateOverride> * _dataOutput;
    NSObject<OS_dispatch_queue> * _delegateOverrideCallbackQueue;
    NSMutableArray * _synchronizedDataQueue;
    NSMutableArray * _timestampAdjustmentsDataQueue;
}

@property (nonatomic, readonly) AVCaptureOutput<AVCaptureDataOutputDelegateOverride> *dataOutput;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (getter=isLive, nonatomic, readonly) bool live;
@property (nonatomic, readonly) NSMutableArray *synchronizedDataQueue;
@property (nonatomic, retain) NSMutableArray *timestampAdjustmentsDataQueue;

- (id)dataOutput;
- (void)dealloc;
- (id)delegateOverrideCallbackQueue;
- (bool)hasAllExpectedSynchronizedDataForLeaderTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithDataOutput:(id)arg1;
- (bool)isLive;
- (void)setTimestampAdjustmentsDataQueue:(id)arg1;
- (id)synchronizedDataQueue;
- (id)timestampAdjustmentsDataQueue;

@end
