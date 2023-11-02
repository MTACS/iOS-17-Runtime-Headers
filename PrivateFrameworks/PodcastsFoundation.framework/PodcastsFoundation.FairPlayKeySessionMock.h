
@interface PodcastsFoundation.FairPlayKeySessionMock : _TtCs12_SwiftObject <PFFairPlayKeySession> {
    void adamIDHandler;
    void assetHandler;
    void bypassCacheHandler;
    void deregisterHandler;
    void id;
    void keyStoreFilePathHandler;
    void processHandler;
    void registerHandler;
    void stopAndInvalidateHandler;
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
