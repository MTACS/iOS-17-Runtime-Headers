
@interface PodcastsFoundation.ICContentFairPlayKeySession : _TtCs12_SwiftObject <PFFairPlayKeySession> {
    void $__lazy_storage_$_delegateWrapper;
    void $__lazy_storage_$_logPrefix;
    void $__lazy_storage_$_session;
    void asset;
    void bypassCache;
    void id;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  keyCertificateURL;
    void keyStore;
    void pendingProcessCompletion;
    void requestContext;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  urlConfiguration;
}

@property (nonatomic, readonly) PFFairPlayAsset *asset;
@property (nonatomic) bool bypassCache;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *keyStoreFilePath;

- (id)asset;
- (bool)bypassCache;
- (void)deregister;
- (id)id;
- (id)keyStoreFilePath;
- (void)processKeyWith:(id)arg1 completion:(id /* block */)arg2;
- (void)register;
- (void)setBypassCache:(bool)arg1;
- (void)stopAndInvalidateKeysWithCompletion:(id /* block */)arg1;

@end
