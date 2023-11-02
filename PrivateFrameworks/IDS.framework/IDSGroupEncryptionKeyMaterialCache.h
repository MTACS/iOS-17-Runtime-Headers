
@interface IDSGroupEncryptionKeyMaterialCache : NSObject {
    NSMutableSet * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)enumerateCachedKeyMaterialUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)invalidateKeyMaterialByKeyIndexes:(id)arg1;
- (void)recvKeyMaterial:(id)arg1;

@end
