
@interface WFOperation : NSOperation {
    NSError * _error;
    bool  _finished;
    NSDate * _start;
}

@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (void)finish;
- (bool)isFinished;
- (bool)isReady;
- (void)setError:(id)arg1;
- (void)start;

@end
