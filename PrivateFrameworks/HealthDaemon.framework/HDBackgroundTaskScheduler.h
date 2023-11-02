
@interface HDBackgroundTaskScheduler : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _clients;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tasksQueuedForDelivery;
}

- (void).cxx_destruct;
- (void)addTask:(id)arg1 withName:(id)arg2 forClientNamed:(id)arg3;
- (id)init;
- (void)registerClientWithName:(id)arg1 taskHandler:(id /* block */)arg2;
- (void)removeTaskWithName:(id)arg1 forClientNamed:(id)arg2;
- (id)taskWithName:(id)arg1 forClientNamed:(id)arg2;
- (void)unregisterClientWithName:(id)arg1;

@end
