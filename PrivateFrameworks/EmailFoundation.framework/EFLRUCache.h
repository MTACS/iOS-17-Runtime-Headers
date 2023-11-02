
@interface EFLRUCache : NSObject <EFLoggable, EFPubliclyDescribable> {
    unsigned long long  _capacity;
    _EFLRUCacheNode * _firstNode;
    _EFLRUCacheNode * _lastNode;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _nodesByKey;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, retain) _EFLRUCacheNode *firstNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _EFLRUCacheNode *lastNode;
@property (nonatomic, readonly) NSMutableDictionary *nodesByKey;
@property (nonatomic) unsigned long long size;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_pruneLastObject;
- (void)_pushToTop:(id)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)capacity;
- (id)description;
- (id)ef_publicDescription;
- (id)firstNode;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)lastNode;
- (id)nodesByKey;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setFirstNode:(id)arg1;
- (void)setLastNode:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)test_firstNode;
- (id)test_lastNode;
- (unsigned long long)test_size;

@end
