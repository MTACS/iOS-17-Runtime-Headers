
@interface MRV2NowPlayingControllerOperationQueue : NSObject {
    bool  _invalidated;
    NSOperationQueue * _queue;
}

- (void).cxx_destruct;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;

@end
