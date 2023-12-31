
@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSObject<OS_dispatch_queue> * _logCatQueue;
    NSMutableSet * _objects;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)immutableSet;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)removeObject:(id)arg1;

@end
