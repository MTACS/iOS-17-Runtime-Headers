
@interface NSGenerationalRowCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSPersistentStoreCache * _primaryCache;
    NSMutableDictionary * _rowCachesByGenerationToken;
    NSPersistentStore * _store;
}

- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end
