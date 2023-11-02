
@interface ATXScreenRepresentation : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _scr;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)findPosition:(id)arg1;
- (id)getAllObjects;
- (id)init;
- (void)removeObject:(id)arg1;

@end
