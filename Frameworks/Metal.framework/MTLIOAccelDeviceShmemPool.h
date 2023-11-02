
@interface MTLIOAccelDeviceShmemPool : NSObject {
    struct _MTLIOAccelDeviceShmemPoolPrivate { 
        struct shmemPoolQueue { 
            MTLIOAccelDeviceShmem *tqh_first; 
            id *tqh_last; 
        } queue; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        int count; 
        Class shmemClass; 
        MTLIOAccelDevice *device; 
        unsigned int shmemSize; 
    }  _priv;
}

- (int)availableCount;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned int)arg3 options:(id)arg4;
- (void)prune;
- (void)purge;
- (void)setShmemSize:(unsigned int)arg1;
- (unsigned int)shmemSize;

@end
