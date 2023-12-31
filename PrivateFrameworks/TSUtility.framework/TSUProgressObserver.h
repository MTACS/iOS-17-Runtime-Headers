
@interface TSUProgressObserver : NSObject {
    id /* block */  mHandler;
    bool  mLastHandledIndeterminate;
    double  mLastHandledValue;
    NSObject<OS_dispatch_queue> * mQueue;
    double  mValueInterval;
}

@property (nonatomic, readonly) double valueInterval;

- (void)dealloc;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(bool)arg3;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (double)valueInterval;

@end
