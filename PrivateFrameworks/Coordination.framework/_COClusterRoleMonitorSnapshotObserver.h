
@interface _COClusterRoleMonitorSnapshotObserver : NSObject {
    id /* block */  _block;
    id  _cluster;
    NSSet * _lastValue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) id cluster;
@property (nonatomic, retain) NSSet *lastValue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)cluster;
- (id)description;
- (id)initInCluster:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)lastValue;
- (void)notify:(id)arg1;
- (id)queue;
- (void)setLastValue:(id)arg1;

@end
