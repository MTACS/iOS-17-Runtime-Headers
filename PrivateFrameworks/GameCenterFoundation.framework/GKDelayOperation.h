
@interface GKDelayOperation : NSOperation {
    double  _delayInSec;
    id /* block */  _operation;
}

@property (nonatomic) double delayInSec;
@property (nonatomic, copy) id /* block */ operation;

- (void).cxx_destruct;
- (double)delayInSec;
- (id)initWithDelay:(double)arg1 andOperation:(id /* block */)arg2;
- (void)main;
- (id /* block */)operation;
- (void)setDelayInSec:(double)arg1;
- (void)setOperation:(id /* block */)arg1;

@end
