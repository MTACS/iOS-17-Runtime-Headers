
@interface FSWorkQueue : NSObject {
    int  _index;
    NSMutableArray * _queues;
}

@property int index;
@property (retain) NSMutableArray *queues;

- (void).cxx_destruct;
- (void)enqueue:(id /* block */)arg1;
- (int)index;
- (id)initQueueWithDomain:(id)arg1 concurrency:(int)arg2;
- (id)queues;
- (void)setIndex:(int)arg1;
- (void)setQueues:(id)arg1;

@end
