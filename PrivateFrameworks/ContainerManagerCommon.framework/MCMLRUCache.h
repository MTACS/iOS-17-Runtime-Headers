
@interface MCMLRUCache : NSObject <MCMCache> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maxCount;
    NSMutableOrderedSet * _mruItems;
    NSString * _name;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxCount;
@property (nonatomic, readonly) NSMutableOrderedSet *mruItems;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSMutableDictionary *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)maxCount;
- (id)mruItems;
- (id)name;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)storage;

@end
