
@interface SBPPTBlockOperation : SBPPTOperation {
    id /* block */  _block;
    bool  _cancelled;
    unsigned long long  _state;
    id /* block */  _timeoutBlock;
    double  _timeoutInterval;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic) unsigned long long state;
@property (nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) double timeoutInterval;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)operationWithBlock:(id /* block */)arg1;
+ (id)operationWithName:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)cancel;
- (void)cancelAndFailTestWithReason:(id)arg1;
- (id)description;
- (void)finish;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithName:(id)arg1 block:(id /* block */)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)setState:(unsigned long long)arg1;
- (void)setTimeoutBlock:(id /* block */)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)start;
- (unsigned long long)state;
- (id /* block */)timeoutBlock;
- (double)timeoutInterval;

@end
