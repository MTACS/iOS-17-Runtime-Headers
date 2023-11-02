
@interface _NUObservation : NSObject {
    id /* block */  _block;
    long long  _key;
    id  _observer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) long long key;
@property (nonatomic, readonly) id observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)init;
- (id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (long long)key;
- (void)notifyWithBlock:(id /* block */)arg1;
- (id)observer;
- (id)queue;

@end