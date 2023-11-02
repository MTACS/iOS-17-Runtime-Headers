
@interface WLKDebouncingQueue : NSObject {
    unsigned int  _delay;
    NSOperationQueue * _queue;
}

@property unsigned int delay;
@property (nonatomic, retain) NSOperationQueue *queue;

- (void).cxx_destruct;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (unsigned int)delay;
- (id)init;
- (id)queue;
- (void)setDelay:(unsigned int)arg1;
- (void)setQueue:(id)arg1;

@end
