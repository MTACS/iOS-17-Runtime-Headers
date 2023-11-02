
@interface __HMQueueDelegateCaller : HMDelegateCaller {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)invokeBlock:(id /* block */)arg1;

@end
