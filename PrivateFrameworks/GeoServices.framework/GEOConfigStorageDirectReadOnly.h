
@interface GEOConfigStorageDirectReadOnly : NSObject <GEOConfigStorageReadOnly> {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isReading;
    NSURL * _path;
    long long  _source;
    NSMutableDictionary * _valueStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _valueStoreLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (id)initWithPath:(id)arg1 forSource:(long long)arg2;
- (void)resync;

@end
