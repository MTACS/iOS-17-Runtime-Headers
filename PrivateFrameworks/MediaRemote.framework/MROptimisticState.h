
@interface MROptimisticState : NSObject {
    id  _expectedState;
    id  _initialState;
    MSVTimer * _timer;
}

@property (nonatomic, readonly) id expectedState;
@property (nonatomic, readonly) id initialState;
@property (nonatomic, readonly) MSVTimer *timer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)expectedState;
- (id)initWithInitialState:(id)arg1 expectedState:(id)arg2 timeout:(double)arg3 queue:(id)arg4 timeoutHandler:(id /* block */)arg5;
- (id)initialState;
- (id)timer;

@end
