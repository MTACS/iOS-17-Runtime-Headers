
@interface _COClusterRoleMonitorMemberObserver : NSObject {
    id /* block */  _block;
    id  _cluster;
    COClusterRole * _lastValue;
    COClusterMember * _member;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) id cluster;
@property (nonatomic, retain) COClusterRole *lastValue;
@property (nonatomic, readonly) COClusterMember *member;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)cluster;
- (id)description;
- (id)initWithMember:(id)arg1 inCluster:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (id)lastValue;
- (id)member;
- (void)notify:(id)arg1;
- (id)queue;
- (void)setLastValue:(id)arg1;

@end
