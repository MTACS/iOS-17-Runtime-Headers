
@interface MOSink : MOSubscriber <MOCancellable> {
    bool  _active;
    NSObject * _lock;
    id /* block */  _receiveCompletionBlock;
    id /* block */  _receiveInputBlock;
    <MOSubscription> * _subscription;
}

@property (nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *lock;
@property (nonatomic, readonly) id /* block */ receiveCompletionBlock;
@property (nonatomic, readonly) id /* block */ receiveInputBlock;
@property (nonatomic, readonly) <MOSubscription> *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)active;
- (void)cancel;
- (void)dealloc;
- (id)initWithCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)lock;
- (void)receiveCompletion:(id)arg1;
- (id /* block */)receiveCompletionBlock;
- (unsigned long long)receiveInput:(id)arg1;
- (id /* block */)receiveInputBlock;
- (void)receiveSubscription:(id)arg1;
- (id)subscription;

@end
