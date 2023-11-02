
@interface AAFPromise : NSObject {
    NSMutableArray * _callbacks;
    bool  _completed;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _queue;
    AAFPromise * _selfReference;
    id  _value;
}

@property (nonatomic, readonly) id /* block */ catch;
@property (nonatomic, readonly) id /* block */ then;

+ (id)all:(id)arg1;

- (void).cxx_destruct;
- (id)_chain:(id /* block */)arg1;
- (void)_completeWithValue:(id)arg1 error:(id)arg2;
- (void)_handleChainingResult:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_placeBlock:(id /* block */)arg1 onQueue:(id)arg2;
- (void)_startWithBlock:(id /* block */)arg1;
- (void)abortWithError:(id)arg1;
- (id /* block */)catch;
- (id)catch:(id /* block */)arg1;
- (id)catch:(id /* block */)arg1 onQueue:(id)arg2;
- (id /* block */)catchOnQueue;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)onComplete:(id /* block */)arg1;
- (void)onComplete:(id /* block */)arg1 onQueue:(id)arg2;
- (id /* block */)then;
- (id)then:(id /* block */)arg1;
- (id)then:(id /* block */)arg1 onQueue:(id)arg2;
- (id /* block */)thenOnQueue;

@end
