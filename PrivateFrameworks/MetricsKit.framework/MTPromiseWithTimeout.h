
@interface MTPromiseWithTimeout : NSObject {
    NSObject<OS_dispatch_source> * _dispatchSourceTimer;
    MTPromise * _promise;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *dispatchSourceTimer;
@property (nonatomic, retain) MTPromise *promise;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dispatchSourceTimer;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 timeoutBlock:(id /* block */)arg3;
- (id)promise;
- (void)setDispatchSourceTimer:(id)arg1;
- (void)setPromise:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
