
@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    NSObject<OS_dispatch_queue> * _commitQueue;
    bool  _commitSynchronously;
    NSObject<OS_dispatch_queue> * _completionQueue;
    unsigned long long  _devicePartition;
    bool  _disableAsyncCompletionDispatch;
    bool  _disableCrossQueueHazardTracking;
    bool  _disableIOFencing;
    bool  _enableLowLatencySignalSharedEvent;
    bool  _enableLowLatencyWaitSharedEvent;
    bool  _lockParameterBufferSizeToMax;
    unsigned long long  _maxCommandBufferCount;
    bool  _openGLQueue;
    unsigned long long  _qosLevel;
}

@property (nonatomic) bool disableIOFencing;
@property (nonatomic) bool enableLowLatencySignalSharedEvent;
@property (nonatomic) bool enableLowLatencyWaitSharedEvent;
@property bool isOpenGLQueue;
@property (nonatomic) bool lockParameterBufferSizeToMax;

- (id)commitQueue;
- (bool)commitSynchronously;
- (id)completionQueue;
- (id)description;
- (unsigned long long)devicePartition;
- (bool)disableAsyncCompletionDispatch;
- (bool)disableCrossQueueHazardTracking;
- (bool)disableIOFencing;
- (bool)enableLowLatencySignalSharedEvent;
- (bool)enableLowLatencyWaitSharedEvent;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)init;
- (bool)isOpenGLQueue;
- (bool)lockParameterBufferSizeToMax;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosLevel;
- (void)setCommitQueue:(id)arg1;
- (void)setCommitSynchronously:(bool)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setDevicePartition:(unsigned long long)arg1;
- (void)setDisableAsyncCompletionDispatch:(bool)arg1;
- (void)setDisableCrossQueueHazardTracking:(bool)arg1;
- (void)setDisableIOFencing:(bool)arg1;
- (void)setEnableLowLatencySignalSharedEvent:(bool)arg1;
- (void)setEnableLowLatencyWaitSharedEvent:(bool)arg1;
- (void)setIsOpenGLQueue:(bool)arg1;
- (void)setLockParameterBufferSizeToMax:(bool)arg1;
- (void)setMaxCommandBufferCount:(unsigned long long)arg1;
- (void)setQosLevel:(unsigned long long)arg1;

@end
