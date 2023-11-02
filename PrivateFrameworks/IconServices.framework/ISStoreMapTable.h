
@interface ISStoreMapTable : NSObject {
    NSData * _data;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    unsigned long long  _initialCapacity;
    NSURL * _url;
}

@property (readonly) NSData *data;
@property struct os_unfair_lock_s { unsigned int x1; } dataLock;
@property (readonly) unsigned long long initialCapacity;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (void)_extend;
- (void)_extendData;
- (void)_extendWithMultiplyer:(float)arg1;
- (void)addData:(id)arg1 forUUID:(id)arg2;
- (void)compact;
- (id)data;
- (id)dataForUUID:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })dataLock;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (void)enumerateWithUUID:(unsigned char)arg1 block:(id /* block */)arg2;
- (id)initWithURL:(id)arg1 capacity:(unsigned long long)arg2;
- (unsigned long long)initialCapacity;
- (void)removeAll;
- (void)removeDataForUUID:(id)arg1;
- (void)removeDataForUUID:(id)arg1 passingTest:(id /* block */)arg2;
- (void)setBytes:(const void*)arg1 size:(unsigned long long)arg2 forUUID:(unsigned char)arg3;
- (void)setDataLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
