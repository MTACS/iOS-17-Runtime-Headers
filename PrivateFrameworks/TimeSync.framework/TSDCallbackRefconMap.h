
@interface TSDCallbackRefconMap : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _nextRefcon;
    NSMutableDictionary * _refcons;
}

+ (id)sharedTSDCallbackRefconMap;

- (void).cxx_destruct;
- (unsigned long long)allocateRefcon:(id)arg1;
- (id)getObject:(unsigned long long)arg1;
- (id)init;
- (void)releaseRefcon:(unsigned long long)arg1;

@end
