
@interface TSUScaledProgress : TSUProgress {
    TSUProgress * mProgress;
    id  mProgressObserver;
    NSObject<OS_dispatch_queue> * mProgressQueue;
    TSUScaledProgressStorage * mStorage;
}

@property double maxValue;
@property (retain) TSUProgress *progress;

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (bool)isIndeterminate;
- (double)maxValue;
- (void)p_addProgressObserverToProgressInQueue;
- (void)p_removeProgressObserverFromProgressInQueue;
- (id)progress;
- (void)removeProgressObserver:(id)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setProgress:(id)arg1;
- (double)value;

@end
