
@interface PDFBlockQueuePair : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) id /* block */ block;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)blockQueuePairWithBlock:(id /* block */)arg1 andQueue:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1 andQueue:(id)arg2;
- (id)queue;

@end
