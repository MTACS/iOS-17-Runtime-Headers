
@interface FMQueueSynchronizer : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)conditionalSync:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
