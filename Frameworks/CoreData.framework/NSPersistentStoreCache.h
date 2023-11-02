
@interface NSPersistentStoreCache : NSObject {
    unsigned long long  _capacity;
    id  _externalData;
    struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * _externalDataValueCallbacks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct persistentStoreCacheFlags { 
        unsigned int _preserveToManyRelationships : 1; 
        unsigned int _reserved : 31; 
    }  _persistentStoreCacheFlags;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithPersistentStore:(id)arg1;
- (id)initWithValueCallbacks:(void*)arg1 preserveToManyRelationships:(bool)arg2;

@end
