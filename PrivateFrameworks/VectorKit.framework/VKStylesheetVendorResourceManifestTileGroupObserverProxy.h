
@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver> {
    struct weak_ptr<md::StylesheetVendor> { 
        struct StylesheetVendor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _vendor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStylesheetVendor:(struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end
