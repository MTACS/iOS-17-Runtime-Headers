
@interface GEOConfigStorageDirectReadWrite : GEOConfigStorageDirectReadOnly <GEOConfigStorageReadWrite> {
    NSMutableSet * _changedKeys;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeLock;
    NSObject<OS_dispatch_source> * _writeTimer;
    id  _writeTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1 forSource:(long long)arg2;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
