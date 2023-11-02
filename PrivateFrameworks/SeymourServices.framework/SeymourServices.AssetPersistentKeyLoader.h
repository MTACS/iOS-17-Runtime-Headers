
@interface SeymourServices.AssetPersistentKeyLoader : NSObject <AVContentKeySessionDelegate> {
    void assetDataStore;
    void assetFileStore;
    void assetMediaStreamKeyProvider;
    void eventHub;
    void keyLoaderQueue;
    void keyProvider;
    void lock;
    void persistenceStore;
    void tasks;
}

- (void).cxx_destruct;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (bool)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
- (id)init;

@end
