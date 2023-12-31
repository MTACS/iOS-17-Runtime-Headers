
@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject {
    HAPAccessoryServerBTLE * _accessoryServer;
    double  _lastSeen;
}

@property (nonatomic, readonly) HAPAccessoryServerBTLE *accessoryServer;
@property (nonatomic) double lastSeen;

+ (id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryServer;
- (double)lastSeen;
- (void)setLastSeen:(double)arg1;

@end
