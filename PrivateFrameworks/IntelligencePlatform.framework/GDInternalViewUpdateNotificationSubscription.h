
@interface GDInternalViewUpdateNotificationSubscription : NSObject {
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, readonly) BMBiomeScheduler *scheduler;
@property (nonatomic, readonly) BPSSink *sink;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)cancelSubscription;
- (id)initForViewName:(id)arg1 systemwideUniqueSubscriptionIdentifier:(id)arg2 useCase:(id)arg3 targetQueue:(id)arg4 onReceiveUpdateNotificationBlock:(id /* block */)arg5;
- (id)scheduler;
- (id)sink;
- (id)targetQueue;

@end
