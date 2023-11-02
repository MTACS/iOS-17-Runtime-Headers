
@interface NEIKEv2CompanionDatapath : NSObject {
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    NSString * _connectedEndpointString;
    long long  _connectedInterfaceType;
    unsigned char  _connectionSetupAttempts;
    NSObject<OS_nw_connection> * _datapathConnection;
    unsigned long long  _identifier;
    NSObject<OS_nw_error> * _lastConnectionError;
    NWHostEndpoint * _localEndpointForDatapath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NEIKEv2PacketTunnelProvider * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    NWHostEndpoint * _remoteEndpoint;
    NSArray * _resolvedEndpoints;
    unsigned char  _state;
    bool  _wasReady;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
