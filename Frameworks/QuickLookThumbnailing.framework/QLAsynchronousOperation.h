
@interface QLAsynchronousOperation : NSOperation {
    bool  _executing;
    bool  _finished;
}

@property (getter=isExecuting, nonatomic) bool executing;
@property (getter=isFinished, nonatomic) bool finished;

- (void)finish;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
