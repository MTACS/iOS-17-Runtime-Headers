
@interface MARootProgressReporter : MAProgressReporter {
    bool  _isCancelled;
    double  _lastProgressCallTime;
    double  _progress;
    id /* block */  _progressBlock;
}

@property bool isCancelled;
@property (readonly) double progress;
@property (nonatomic, readonly) id /* block */ progressBlock;

- (void).cxx_destruct;
- (void)cancelOperation;
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;
- (id)init;
- (id)initWithProgressBlock:(id /* block */)arg1;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;
- (double)progress;
- (id /* block */)progressBlock;
- (void)setIsCancelled:(bool)arg1;

@end
