
@interface IOSurfaceRemotePerSurfaceGlobalState : NSObject {
    unsigned int  _csid;
    NSObject<OS_xpc_object> * _extraData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    void * _mapped_address;
    unsigned long long  _mapped_size;
}

+ (id)globalStateForSurface:(struct __IOSurfaceClient { }*)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSurfaceID:(unsigned int)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4;
- (id)mergeExtraData:(id)arg1;

@end
