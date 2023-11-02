
@interface AppStoreKitInternal.ArtworkItemProvider : NSItemProvider {
    void artworkLoader;
    void artworkLoaderConfig;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
