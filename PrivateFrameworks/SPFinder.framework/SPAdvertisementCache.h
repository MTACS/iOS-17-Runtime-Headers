
@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching> {
    <SPAdvertisementCacheXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    FMXPCSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SPAdvertisementCacheXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, retain) FMXPCSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)advertisementsForSearchCriteria:(id)arg1 completion:(id /* block */)arg2;
- (void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(id /* block */)arg4;
- (void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCacheWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)markAdvertisementsProcessed:(id)arg1 completion:(id /* block */)arg2;
- (void)markBeaconPayloadsProcessed:(id)arg1 completion:(id /* block */)arg2;
- (void)markRecordsProcessed:(id)arg1 completion:(id /* block */)arg2;
- (void)mockingEnabled:(bool)arg1;
- (id)proxy;
- (id)queue;
- (id)remoteInterface;
- (void)saveAdvertisements:(id)arg1 completion:(id /* block */)arg2;
- (void)saveBeaconPayloads:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceDescription;
- (id)session;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setSession:(id)arg1;

@end
