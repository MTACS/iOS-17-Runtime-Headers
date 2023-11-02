
@interface PXStoryPassthroughProducer : NSObject {
    bool  _allowsProgress;
    bool  _prefersAsynchronousDelivery;
    id  _result;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) bool allowsProgress;
@property (nonatomic, readonly) bool prefersAsynchronousDelivery;
@property (nonatomic, readonly) id result;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)allowsProgress;
- (id)init;
- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 options:(unsigned long long)arg2;
- (bool)prefersAsynchronousDelivery;
- (id)requestResultWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (id)result;
- (id)workQueue;

@end
