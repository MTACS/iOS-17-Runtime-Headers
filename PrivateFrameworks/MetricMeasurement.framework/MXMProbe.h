
@interface MXMProbe : NSObject {
    bool  __shouldStop;
    bool  __updating;
    <MXMProbeDelegate> * _delegate;
    MXMSampleFilter * _filter;
    id /* block */  _stopHandler;
    NSObject<OS_dispatch_semaphore> * _stopWaiter;
    id /* block */  _updateHandler;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property bool _shouldStop;
@property bool _updating;
@property (nonatomic) <MXMProbeDelegate> *delegate;
@property (nonatomic, copy) MXMSampleFilter *filter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;
@property (readonly) bool updating;

+ (id)probe;

- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_handleIncomingData:(id)arg1;
- (bool)_setupWaitSemaphore;
- (bool)_shouldStop;
- (void)_stopUpdates;
- (bool)_updating;
- (id)delegate;
- (id)filter;
- (id)init;
- (bool)performPreIterationActions;
- (id)sampleWithTimeout:(double)arg1;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)set_shouldStop:(bool)arg1;
- (void)set_updating:(bool)arg1;
- (void)stopUpdates;
- (void)updateNowUntilStopped;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)arg1;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)arg1 stopHandler:(id /* block */)arg2;
- (void)updateNowUntilTimeout:(double)arg1;
- (void)updateNowUntilTimeout:(double)arg1 updateHandler:(id /* block */)arg2;
- (void)updateNowUntilTimeout:(double)arg1 updateHandler:(id /* block */)arg2 stopHandler:(id /* block */)arg3;
- (id)updateQueue;
- (bool)updating;
- (void)waitForeverUntilStopped;
- (bool)waitUntilStoppedWithTimeout:(double)arg1;

@end
