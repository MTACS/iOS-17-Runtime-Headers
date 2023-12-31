
@interface VTTriggerEventMonitorManager : NSObject {
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addConnection:(id)arg1;
- (id)init;
- (void)notifyEarlyDetect;
- (void)notifyVoiceTrigger;
- (void)removeConnection:(id)arg1;

@end
