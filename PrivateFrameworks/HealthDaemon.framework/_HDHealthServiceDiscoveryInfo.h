
@interface _HDHealthServiceDiscoveryInfo : NSObject {
    bool  _alwaysNotify;
    id /* block */  _discoveryHandler;
    unsigned long long  _discoveryIdentifier;
    NSMutableSet * _peripheralsUUIDs;
    bool  _requiresActiveScan;
    CBUUID * _serviceUUID;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

- (void).cxx_destruct;

@end
