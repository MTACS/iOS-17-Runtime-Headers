
@interface _AMMotionDetectionTriggerManagerObserverContext : NSObject {
    <AMMotionDetectionTriggerManagerObserver> * _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <AMMotionDetectionTriggerManagerObserver> *observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;
- (id)observer;
- (id)queue;

@end
