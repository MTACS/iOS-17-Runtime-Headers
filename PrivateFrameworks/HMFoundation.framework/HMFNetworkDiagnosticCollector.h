
@interface HMFNetworkDiagnosticCollector : HMFObject <HMFNetworkBrowserDelegate, HMFNetworkDiagnosticDelegate> {
    HMFNetworkBrowser * _browser;
    NSArray * _currentDiagnostics;
    NSMutableDictionary * _devicesMap;
    double  _diagnosticTimeout;
    double  _discoveryTimeout;
    double  _resolveTimeout;
    NSArray * _serviceTypes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMFNetworkBrowser *browser;
@property (nonatomic, readonly) NSArray *currentDiagnostics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *devicesMap;
@property (nonatomic) double diagnosticTimeout;
@property (nonatomic) double discoveryTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic) double resolveTimeout;
@property (nonatomic, retain) NSArray *serviceTypes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)browser;
- (void)browser:(id)arg1 didFindNetworkService:(id)arg2;
- (void)browser:(id)arg1 didLoseNetworkService:(id)arg2;
- (void)browser:(id)arg1 didStartBrowsingForServiceType:(id)arg2;
- (void)browser:(id)arg1 didStopBrowsingForServiceType:(id)arg2;
- (void)browser:(id)arg1 didUpdateNetworkService:(id)arg2;
- (id)currentDiagnostics;
- (id)devices;
- (id)devicesMap;
- (void)diagnostic:(id)arg1 didCompleteWithError:(id)arg2;
- (void)diagnostic:(id)arg1 didStartWithDevice:(id)arg2;
- (id)diagnosticReport;
- (double)diagnosticTimeout;
- (id)discoverDevicesWithTimeout:(double)arg1;
- (double)discoveryTimeout;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 discoveryTimeout:(double)arg2 resolveTimeout:(double)arg3 diagnosticTimeout:(double)arg4 serviceTypes:(id)arg5;
- (id)networkDiagnostics;
- (id)resolveDevicesWithAddressType:(unsigned long long)arg1 timeout:(double)arg2;
- (double)resolveTimeout;
- (id)run;
- (id)serviceTypes;
- (void)setBrowser:(id)arg1;
- (void)setDevicesMap:(id)arg1;
- (void)setDiagnosticTimeout:(double)arg1;
- (void)setDiscoveryTimeout:(double)arg1;
- (void)setResolveTimeout:(double)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)startDiagnosticsWithTimeout:(double)arg1;
- (void)stop;
- (id)workContext;
- (id)workQueue;

@end
