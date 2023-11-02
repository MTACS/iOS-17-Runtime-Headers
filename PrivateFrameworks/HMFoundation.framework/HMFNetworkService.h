
@interface HMFNetworkService : HMFObject {
    NSMutableArray * _ipAddresses;
    NSObject<OS_nw_connection> * _nwConnection;
    unsigned short  _port;
    HMFNetworkServiceInfo * _serviceInfo;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, retain) NSMutableArray *ipAddresses;
@property (nonatomic, retain) NSObject<OS_nw_connection> *nwConnection;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, readonly) HMFNetworkServiceInfo *serviceInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_connectionWithPromise:(id)arg1 parameters:(id)arg2 receivedDataHandler:(id /* block */)arg3;
- (bool)_updateDeviceWithPath:(id)arg1;
- (id)addresses;
- (void)dealloc;
- (id)description;
- (id)host;
- (id)hostName;
- (id)initWithServiceInfo:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithTXTRecords:(id)arg1 browseResult:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (id)ipAddresses;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)nwConnection;
- (unsigned short)port;
- (id)resolveAddressWithAddressType:(unsigned long long)arg1 timeout:(double)arg2 receivedDataHandler:(id /* block */)arg3;
- (id)serviceInfo;
- (void)setIpAddresses:(id)arg1;
- (void)setNwConnection:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)shortDescription;
- (void)updateWithService:(id)arg1;
- (id)workQueue;

@end
