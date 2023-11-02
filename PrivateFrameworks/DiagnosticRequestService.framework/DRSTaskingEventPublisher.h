
@interface DRSTaskingEventPublisher : NSObject {
    DRSConfigPersistedStore * _configStore;
    NSObject<OS_xpc_event_publisher> * _publisher;
    NSMutableSet * _subscribers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) DRSConfigPersistedStore *configStore;
@property (nonatomic, readonly) NSObject<OS_xpc_event_publisher> *publisher;
@property (nonatomic, readonly) NSMutableSet *subscribers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)_isFirst;

- (void).cxx_destruct;
- (id)_activeConfigForTeamID:(id)arg1 errorOut:(id*)arg2;
- (void)_addSubscriber:(unsigned long long)arg1 descriptor:(id)arg2 isOldSubscriber:(bool)arg3;
- (void)_publishNotification:(id)arg1 config:(id)arg2;
- (void)_removeSubscriber:(unsigned long long)arg1;
- (id)configStore;
- (id)initWithConfigStore:(id)arg1;
- (void)publishConfigUpdateForTeamID:(id)arg1 state:(unsigned char)arg2 config:(id)arg3;
- (void)publishCurrentConfigForTeamID:(id)arg1;
- (id)publisher;
- (id)subscribers;
- (id)workQueue;

@end
