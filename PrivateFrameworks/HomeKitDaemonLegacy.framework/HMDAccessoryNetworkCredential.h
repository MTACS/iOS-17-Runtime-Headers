
@interface HMDAccessoryNetworkCredential : NSObject {
    NSNumber * _clientIdentifier;
    NSUUID * _networkRouterUUID;
    NSData * _wiFiPSK;
}

@property (readonly) NSNumber *clientIdentifier;
@property (readonly) NSUUID *networkRouterUUID;
@property (readonly) NSData *wiFiPSK;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)initWithNetworkRouterUUID:(id)arg1 clientIdentifier:(id)arg2 wiFiPSK:(id)arg3;
- (id)networkRouterUUID;
- (id)wiFiPSK;

@end
