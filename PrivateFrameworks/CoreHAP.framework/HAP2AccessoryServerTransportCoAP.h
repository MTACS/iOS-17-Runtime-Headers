
@interface HAP2AccessoryServerTransportCoAP : HAP2AccessoryServerTransportBaseWithDelegate <HAP2CoAPClientDelegate> {
    HAP2AccessoryServerDiscoveryAccessoryInfo * _accessoryInfo;
    NSMutableArray * _addressList;
    double  _addressResolutionTimeout;
    NSMutableArray * _bonjourNames;
    <HAP2CoAPClient> * _coapClient;
    <HAP2AccessoryServerTransportCoAPClientFactory> * _coapClientFactory;
    <HAP2AccessoryServerDiscovery> * _discovery;
    double  _initialACKTimeout;
    struct coap_address_t { 
        unsigned int size; 
        union { 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } sin; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } sin6; 
        } addr; 
    }  _ipAddress;
    unsigned long long  _maxAddressesAllowed;
    unsigned long long  _maxBonjourNamesAllowed;
    unsigned long long  _maxTransmitAttempts;
    unsigned long long  _numOfAddresses;
    unsigned long long  _numOfAddressesTried;
    NSObject<OS_nw_connection> * _nwConnection;
    HMFActivity * _resolveActivity;
    id /* block */  _sendRequestCompletion;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    id /* block */  _stateChangeCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)client:(id)arg1 didReceiveEvent:(id)arg2;
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;
- (void)doCloseWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doOpenWithCompletion:(id /* block */)arg1;
- (void)doSendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)doUpdateMaxRequestTimeout:(double)arg1;
- (id)endpointForCharacteristic:(id)arg1;
- (id)endpointForCharacteristics:(id)arg1;
- (id)initWithAccessoryInfo:(id)arg1 discovery:(id)arg2 operationQueue:(id)arg3;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5 addressResolutionTimeout:(double)arg6 discovery:(id)arg7 accessoryInfo:(id)arg8 coapClient:(id)arg9 coapClientFactory:(id)arg10;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 operationQueue:(id)arg4;
- (bool)mergeWithNewTransport:(id)arg1;
- (id)mimeTypeForCharacteristicRequests;
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;
- (id)underlyingTransport;
- (id)wellKnownEndpoint:(unsigned long long)arg1;

@end
