
@interface SOAsynchronousOperation : NSOperation {
    unsigned long long  _state;
}

@property (nonatomic) unsigned long long state;

- (void)finish;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)main;
- (void)setState:(unsigned long long)arg1;
- (void)start;
- (unsigned long long)state;

@end
