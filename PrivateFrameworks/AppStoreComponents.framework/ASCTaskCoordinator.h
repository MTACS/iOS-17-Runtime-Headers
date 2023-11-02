
@interface ASCTaskCoordinator : NSObject {
    NSRecursiveLock * _consistencyLock;
    NSCache * _loadedResults;
    NSString * _name;
    NSMutableDictionary * _pendingResults;
}

@property (nonatomic, readonly) NSRecursiveLock *consistencyLock;
@property (nonatomic, readonly) NSCache *loadedResults;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSMutableDictionary *pendingResults;

+ (id)log;

- (void).cxx_destruct;
- (id)consistencyLock;
- (bool)hasTaskForKey:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)loadedResults;
- (id)name;
- (id)pendingResults;
- (void)removeAllFinishedTasks;
- (void)removeTaskForKey:(id)arg1;
- (id)taskForKey:(id)arg1;
- (void)taskForKey:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)taskForKey:(id)arg1 didFailWithError:(id)arg2;
- (id)taskForKey:(id)arg1 withCreatorBlock:(id /* block */)arg2;
- (void)withLock:(id /* block */)arg1;

@end
