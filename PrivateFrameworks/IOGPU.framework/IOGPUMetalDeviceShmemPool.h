
@interface IOGPUMetalDeviceShmemPool : NSObject {
    struct _IOGPUMetalDeviceShmemPoolPrivate { 
        struct shmemPoolQueue { 
            IOGPUMetalDeviceShmem *tqh_first; 
            id *tqh_last; 
        } queue; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        int count; 
        Class shmemClass; 
        IOGPUMetalDevice *device; 
        unsigned int shmemSize; 
        int shmemType; 
    }  _priv;
}

- (int)availableCount;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 shmemSize:(unsigned int)arg3 shmemType:(int)arg4 options:(id)arg5;
- (void)prune;
- (void)purge;
- (void)setShmemSize:(unsigned int)arg1;
- (unsigned int)shmemSize;

@end
