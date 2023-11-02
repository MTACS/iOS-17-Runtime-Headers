
@interface MRAVRoutingDiscoverySessionOperationReport : NSObject {
    NSArray * _discoveredOutputDeviceUIDs;
    NSError * _error;
    NSArray * _undiscoveredOutputDeviceUIDs;
}

@property (nonatomic, retain) NSArray *discoveredOutputDeviceUIDs;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *undiscoveredOutputDeviceUIDs;

- (void).cxx_destruct;
- (id)description;
- (id)discoveredOutputDeviceUIDs;
- (id)error;
- (void)setDiscoveredOutputDeviceUIDs:(id)arg1;
- (void)setError:(id)arg1;
- (void)setUndiscoveredOutputDeviceUIDs:(id)arg1;
- (id)undiscoveredOutputDeviceUIDs;

@end
