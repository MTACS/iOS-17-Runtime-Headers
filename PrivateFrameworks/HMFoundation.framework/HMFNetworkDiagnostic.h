
@interface HMFNetworkDiagnostic : HMFObject {
    <HMFNetworkDiagnosticDelegate> * _delegate;
    HMFNetworkService * _device;
    bool  _started;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <HMFNetworkDiagnosticDelegate> *delegate;
@property (nonatomic, readonly) HMFNetworkService *device;
@property (getter=isStarted, nonatomic) bool started;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)runDiagnostics:(id)arg1 timeout:(double)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (id)device;
- (id)dumpReport;
- (void)handleReceivedData:(id)arg1;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (bool)isStarted;
- (id)logIdentifier;
- (id)run;
- (void)setDelegate:(id)arg1;
- (void)setStarted:(bool)arg1;
- (id)shortDescription;
- (void)stop;
- (id)workQueue;

@end
