
@interface SBSBackgroundActivityAssertionAcquisitionHandlerEntry : NSObject {
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)init;
- (id)initWithHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)queue;

@end
