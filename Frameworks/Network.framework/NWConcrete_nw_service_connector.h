
@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {
    NSObject<OS_nw_dictionary> * activeConnections;
    NSObject<OS_nw_dictionary> * activeOutgoingRequests;
    NSObject<OS_nw_parameters> * clientParameters;
    unsigned int  failConnectionAfterVerificationFailsForTesting;
    unsigned int  failConnectionAfterVerificationPassesForTesting;
    NSObject<OS_nw_listener> * listener;
    unsigned short  localPortHBO;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * localPrivKey;
    unsigned char  localPubKey;
    NSObject<OS_nw_dictionary> * pendingIncomingRequests;
    NSObject<OS_nw_array> * pendingUnverifiedIncomingRequests;
    NSObject<OS_xpc_object> * remotePubKeys;
    void * retryAddrInUseTimer;
    unsigned char  retryCounterForAddressInUse;
    id /* block */  serviceAvailableBlock;
    NSObject<OS_dispatch_queue> * serviceConnectorQueue;
    unsigned int  state;
    unsigned long long  uniqueID;
    unsigned int  useLargeUUIDForTesting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
