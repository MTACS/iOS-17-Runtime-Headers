
@interface MTLIOAccelDeviceShmem : NSObject {
    MTLIOAccelDevice * _device;
    struct _MTLIOAccelDeviceShmemPrivate { 
        MTLIOAccelDeviceShmemPool *pool; 
        struct { 
            MTLIOAccelDeviceShmem *tqe_next; 
            id *tqe_prev; 
        } entry; 
        unsigned long long time_added; 
    }  _priv;
    unsigned int  _shmemID;
    unsigned int  _shmemSize;
    void * _virtualAddress;
    bool  purgeable;
}

@property (readonly) unsigned int shmemID;
@property (readonly) unsigned int shmemSize;
@property (readonly) void*virtualAddress;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 shmemSize:(unsigned int)arg2;
- (unsigned int)shmemID;
- (unsigned int)shmemSize;
- (void*)virtualAddress;

@end
