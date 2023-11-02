
@interface CSReusableBufferPool : NSObject {
    CSReusableBufferPoolConfiguration * _configuration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numberOfBackingStores;
    NSMutableArray * _recycledBackingStores;
}

@property (nonatomic, readonly) CSReusableBufferPoolConfiguration *configuration;

- (void).cxx_destruct;
- (bool)_canCreateNewBackingStore;
- (void)_checkIdleBackingStores;
- (id)_createNewBackingStore;
- (id)_getAvailableBackingStore;
- (void)_recycleUsedBackingStore:(id)arg1;
- (void)cleanup;
- (id)configuration;
- (id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)handleUsedBackingStore:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
