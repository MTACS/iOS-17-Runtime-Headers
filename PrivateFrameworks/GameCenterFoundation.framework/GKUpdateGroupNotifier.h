
@interface GKUpdateGroupNotifier : NSObject {
    NSError * _error;
    GKUpdateGroup * _group;
    NSLock * _lock;
    NSMutableArray * _updateQueue;
}

@property (retain) NSError *error;
@property (nonatomic) GKUpdateGroup *group;
@property (retain) NSLock *lock;
@property (nonatomic, retain) NSMutableArray *updateQueue;

- (void).cxx_destruct;
- (void)addUpdate:(id /* block */)arg1 error:(id)arg2;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)group;
- (id)init;
- (id)lock;
- (oneway void)release;
- (id)retain;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)updateError:(id)arg1;
- (id)updateQueue;

@end
