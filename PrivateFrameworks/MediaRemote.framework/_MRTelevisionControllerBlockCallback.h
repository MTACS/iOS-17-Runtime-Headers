
@interface _MRTelevisionControllerBlockCallback : NSObject {
    id /* block */  _callbackBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ callbackBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)callbackBlock;
- (id)initWithCallbackBlock:(id /* block */)arg1 queue:(id)arg2;
- (id)queue;

@end
