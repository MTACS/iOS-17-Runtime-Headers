
@interface GRLResourceGroupObserver : NSObject <GEOResourceManifestTileGroupObserver> {
    void * _resourceProvider;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _resourceProviderLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearProvider;
- (id)initWithResourceProvider:(void*)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;

@end
