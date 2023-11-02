
@interface AMSLRUCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _backingDictionary;
    AMSDoubleLinkedList * _backingList;
    unsigned long long  _maxSize;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableDictionary *backingDictionary;
@property (nonatomic, retain) AMSDoubleLinkedList *backingList;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long maxSize;

- (void).cxx_destruct;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_count;
- (void)_removeObjectForKey:(id)arg1;
- (id)accessQueue;
- (id)allObjectsAndKeys;
- (id)backingDictionary;
- (id)backingList;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (unsigned long long)maxSize;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 canLogCacheMisses:(bool)arg2;
- (id)objectForKey:(id)arg1 withCreationBlock:(id /* block */)arg2;
- (void)removeAllObjects;
- (void)setAccessQueue:(id)arg1;
- (void)setBackingDictionary:(id)arg1;
- (void)setBackingList:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
