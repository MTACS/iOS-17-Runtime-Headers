
@interface SSCoalescingQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *source;

- (void).cxx_destruct;
- (void)executeBlock;
- (id)initWithBlock:(id /* block */)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
