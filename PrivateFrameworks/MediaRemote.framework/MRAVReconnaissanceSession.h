
@interface MRAVReconnaissanceSession : NSObject {
    NSArray * _availableEndpoints;
    NSArray * _availableOutputDevices;
    id /* block */  _callback;
    MRAVRoutingDiscoverySession * _discoverySession;
    id  _discoverySessionCallbackToken;
    unsigned long long  _expectedLogicalDevices;
    NSMutableSet * _knownIncompleteClusterMembers;
    NSArray * _lastProcessedEndpoints;
    NSArray * _lastProcessedOutputDevices;
    NSMutableDictionary * _localMatchingDevicesFound;
    NSMutableDictionary * _matchingDevicesFound;
    NSMutableArray * _matchingEndpointsFound;
    NSArray * _matchingLogicalDeviceIDs;
    NSString * _matchingOutputDeviceGroupID;
    NSSet * _matchingOutputDeviceUIDsSet;
    bool  _returnPartialResults;
    bool  _searchInProgress;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldWaitForUnanimousEndpoints;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    double  _timeoutTimerTimeout;
    MRAVEndpoint * _unanimousEndpoint;
    unsigned long long  _updatesReceived;
    bool  _useWeakMatching;
    bool  _waitForCompleteClusters;
}

@property (nonatomic, readonly) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, copy) NSArray *matchingLogicalDeviceIDs;
@property (nonatomic, readonly) NSString *matchingOutputDeviceGroupID;
@property (nonatomic, readonly) NSArray *matchingOutputDeviceUIDs;
@property (nonatomic) bool returnPartialResults;
@property (nonatomic) bool useWeakMatching;
@property (nonatomic) bool waitForCompleteClusters;

- (void).cxx_destruct;
- (void)beginSearchWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (void)beginSearchWithTimeout:(double)arg1 endpointsCompletion:(id /* block */)arg2;
- (void)beginSearchWithTimeout:(double)arg1 mapCompletion:(id /* block */)arg2;
- (void)cancelSearch;
- (void)dealloc;
- (id)discoverySession;
- (unsigned int)endpointFeatures;
- (id)initWithOutputDeviceUIDs:(id)arg1 outputDeviceGroupID:(id)arg2 features:(unsigned int)arg3;
- (id)matchingLogicalDeviceIDs;
- (id)matchingOutputDeviceGroupID;
- (id)matchingOutputDeviceUIDs;
- (bool)returnPartialResults;
- (void)setMatchingLogicalDeviceIDs:(id)arg1;
- (void)setReturnPartialResults:(bool)arg1;
- (void)setUseWeakMatching:(bool)arg1;
- (void)setWaitForCompleteClusters:(bool)arg1;
- (bool)useWeakMatching;
- (bool)waitForCompleteClusters;

@end
