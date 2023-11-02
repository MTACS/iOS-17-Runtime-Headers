
@interface MKCollectionStorageRefiner : NSObject {
    GEOURLCollectionStorage * _collectionStorage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)_sharedInitWithCollectionStorage:(id)arg1;
- (void)fetchMapItems:(id /* block */)arg1;
- (void)fetchMapItems:(id /* block */)arg1 traits:(id)arg2;
- (id)initWithCollectionStorage:(id)arg1;
- (id)initWithCollectionURL:(id)arg1;

@end
