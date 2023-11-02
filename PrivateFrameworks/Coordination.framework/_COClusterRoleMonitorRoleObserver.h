
@interface _COClusterRoleMonitorRoleObserver : NSObject {
    id /* block */  _block;
    id  _cluster;
    NSSet * _lastValue;
    NSObject<OS_dispatch_queue> * _queue;
    COClusterRole * _role;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) id cluster;
@property (nonatomic, retain) NSSet *lastValue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) COClusterRole *role;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)cluster;
- (id)description;
- (id)initWithRole:(id)arg1 inCluster:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (id)lastValue;
- (void)notify:(id)arg1;
- (id)queue;
- (id)role;
- (void)setLastValue:(id)arg1;

@end
