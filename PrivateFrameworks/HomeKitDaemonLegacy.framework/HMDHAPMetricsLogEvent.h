
@interface HMDHAPMetricsLogEvent : HMMLogEvent {
    unsigned long long  _accessoryServerInvalidations;
    unsigned long long  _btleConnectionPerReasons;
    unsigned long long  _btleConnections;
    unsigned long long  _btleDiscoveries;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _receivedHTTPEvents;
    unsigned long long  _receivedHTTPResponses;
    unsigned long long  _sentHTTPRequests;
}

@property (nonatomic, readonly) unsigned long long accessoryServerInvalidations;
@property (nonatomic, readonly) unsigned long long btleConnectionPerReasons;
@property (nonatomic, readonly) unsigned long long btleConnections;
@property (nonatomic, readonly) unsigned long long btleDiscoveries;
@property (nonatomic, readonly) unsigned long long receivedHTTPEvents;
@property (nonatomic, readonly) unsigned long long receivedHTTPResponses;
@property (nonatomic, readonly) unsigned long long sentHTTPRequests;

- (unsigned long long)accessoryServerInvalidations;
- (unsigned long long)btleConnectionPerReasons;
- (unsigned long long)btleConnections;
- (unsigned long long)btleDiscoveries;
- (unsigned long long)receivedHTTPEvents;
- (unsigned long long)receivedHTTPResponses;
- (unsigned long long)sentHTTPRequests;
- (void)updateWithHAPAccessoryServer:(id)arg1;

@end
