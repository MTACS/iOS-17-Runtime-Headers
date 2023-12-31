
@interface CKMultiDict : NSObject {
    unsigned long long  _count;
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _lockQueue;
}

@property (nonatomic, retain) NSMutableDictionary *dictionary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockQueue;

- (void).cxx_destruct;
- (id)allKeys;
- (unsigned long long)count;
- (id)dequeueObjectForKey:(id)arg1;
- (id)description;
- (id)dictionary;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)headObjectForKey:(id)arg1;
- (id)init;
- (id)lockQueue;
- (id)objectsForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (id)popObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setLockQueue:(id)arg1;

@end
