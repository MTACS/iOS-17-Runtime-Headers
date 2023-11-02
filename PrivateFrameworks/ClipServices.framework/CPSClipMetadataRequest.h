
@interface CPSClipMetadataRequest : NSObject <CPSSessionProxyDelegate> {
    CPSPromise * _availabilityPromise;
    NSString * _fullHash;
    CPSPromise * _iconPromise;
    CPSPromise * _metadataPromise;
    NSURL * _requestURL;
    CPSSessionProxy * _sessionProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLikelyAvailable, nonatomic, readonly) bool likelyAvailable;
@property (nonatomic, readonly) CPSSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpSessionProxyAndPromisesWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (void)dealloc;
- (id)getClipMetadataSynchronously;
- (id)getDownloadedIconURLSynchronously;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2;
- (id)initWithURLHash:(id)arg1;
- (bool)isLikelyAvailable;
- (void)proxy:(id)arg1 didDetermineAvailability:(bool)arg2;
- (void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2;
- (void)proxyDidRetrieveBusinessIcon:(id)arg1;
- (void)proxyDidUpdateMetadata:(id)arg1;
- (void)proxyRemoteServiceDidCrash:(id)arg1;
- (void)requestDownloadedIconWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)requestMetadataWithCompletion:(id /* block */)arg1;
- (id)sessionConfiguration;

@end
