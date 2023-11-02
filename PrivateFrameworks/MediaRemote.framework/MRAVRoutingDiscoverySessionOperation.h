
@interface MRAVRoutingDiscoverySessionOperation : NSObject {
    NSMutableSet * _discoveredEndpoints;
    NSMutableSet * _discoveredOutputDevices;
    NSMutableSet * _discoveredTargetOutputDeviceUIDs;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _endpointDiscoveredHandler;
    id /* block */  _finishHandler;
    MRBlockGuard * _guard;
    id /* block */  _outputDeviceDiscoveredHandler;
    NSArray * _outputDeviceUIDs;
    NSString * _requestID;
    MRAVRoutingDiscoverySession * _session;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ endpointDiscoveredHandler;
@property (nonatomic, copy) id /* block */ finishHandler;
@property (nonatomic, copy) id /* block */ outputDeviceDiscoveredHandler;
@property (nonatomic, readonly, copy) NSArray *outputDeviceUIDs;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_notifyDiscoveredEndpoint:(id)arg1 outputDevice:(id)arg2 forTargetOutputDevice:(id)arg3;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)dispatchQueue;
- (id /* block */)endpointDiscoveredHandler;
- (void)executeWithTimeout:(double)arg1;
- (id /* block */)finishHandler;
- (id)initWithOutputDeviceUIDs:(id)arg1;
- (id /* block */)outputDeviceDiscoveredHandler;
- (id)outputDeviceUIDs;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndpointDiscoveredHandler:(id /* block */)arg1;
- (void)setFinishHandler:(id /* block */)arg1;
- (void)setOutputDeviceDiscoveredHandler:(id /* block */)arg1;

@end
