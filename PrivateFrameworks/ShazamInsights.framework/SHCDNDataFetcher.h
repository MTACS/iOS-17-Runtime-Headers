
@interface SHCDNDataFetcher : NSObject <SHDataFetcher> {
    <SHNetworkRequester> * _networkRequester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SHNetworkRequester> *networkRequester;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clusterDataAtURL:(id)arg1 forLocation:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)doesRequestEtag:(id)arg1 matchInResponse:(id)arg2;
- (id)endpointFromDate:(id)arg1 insights:(id)arg2 location:(id)arg3;
- (void)fetchClusterURL:(id)arg1 forCurrentStorefront:(id)arg2 cachedUniqueHash:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithNetworkRequester:(id)arg1;
- (id)networkRequester;

@end
