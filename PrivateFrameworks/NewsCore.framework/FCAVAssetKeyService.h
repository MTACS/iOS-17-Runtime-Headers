
@interface FCAVAssetKeyService : NSObject <FCAVAssetKeyServiceType> {
    NFPromise * _fairPlayBaseURLPromise;
    NFLazy * _requestEncoder;
    NFLazy * _session;
}

- (void).cxx_destruct;
- (void)fetchAppCertificateWithCompletionHandler:(id /* block */)arg1;
- (void)fetchContentKeyWithURI:(id)arg1 spcData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;

@end
