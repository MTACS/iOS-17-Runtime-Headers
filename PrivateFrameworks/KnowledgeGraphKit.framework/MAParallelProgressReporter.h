
@interface MAParallelProgressReporter : MAProgressReporter {
    unsigned long long  _index;
    MAParallelProgress * _parallelProgress;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) MAParallelProgress *parallelProgress;

- (void).cxx_destruct;
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;
- (unsigned long long)index;
- (id)initWithParallelProgress:(id)arg1 index:(unsigned long long)arg2;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1;
- (bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;
- (id)parallelProgress;

@end
