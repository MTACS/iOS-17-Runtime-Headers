
@interface OITSUProgressContextProgress : OITSUProgress {
    bool  hasAddedProgressContextObserver;
    OITSUProgressContext * mProgressContext;
    NSObject<OS_dispatch_queue> * mProgressContextObserverQueue;
}

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithProgressContext:(id)arg1;
- (bool)isIndeterminate;
- (double)maxValue;
- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)removeProgressObserver:(id)arg1;
- (double)value;

@end
