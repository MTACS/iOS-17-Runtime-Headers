
@interface COObserver : NSObject {
    id /* block */  _handler;
    NSString * _name;
    <COObservable> * _observable;
    NSOperationQueue * _queue;
}

@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) <COObservable> *observable;
@property (nonatomic, readonly) NSOperationQueue *queue;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)initForName:(id)arg1 onObservable:(id)arg2 handler:(id /* block */)arg3 queue:(id)arg4;
- (id)name;
- (void)notify:(id)arg1;
- (id)observable;
- (id)queue;

@end
