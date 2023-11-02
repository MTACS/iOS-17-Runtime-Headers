
@interface GTMTLCaptureService : NSObject <GTMTLCaptureService, GTMTLCaptureServiceObserver> {
    MTLCaptureDescriptorInternal * _activeCaptureDesc;
    GTCaptureDescriptor * _captureRequest;
    NSURL * _currentCaptureURL;
    NSObject<OS_dispatch_semaphore> * _interposeSemaphore;
    NSObject<OS_os_log> * _log;
    GTObservableService * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;
- (bool)hasObservers;
- (id)initWithGuestApp:(struct GTMTLGuestAppClient { id x1; id x2; id x3; id x4; struct os_unfair_lock_s { unsigned int x_5_1_1; } x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; _Atomic long long x10; id x11; id x12; id x13; id x14; int x15; int x16; unsigned long long x17; double x18; bool x19; BOOL x20[7]; }*)arg1;
- (unsigned long long)nextRequestID;
- (void)notifyCaptureObjectsChanged:(id)arg1;
- (void)notifyCaptureProgress:(id)arg1;
- (void)notifyCaptureRequest:(id)arg1;
- (void)notifyUnsupportedFenum:(id)arg1;
- (id)query:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;
- (void)signalInterposeSemaphore;
- (id)startWithDescriptor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (id)update:(id)arg1;
- (void)waitForInterposeSignal;

@end
