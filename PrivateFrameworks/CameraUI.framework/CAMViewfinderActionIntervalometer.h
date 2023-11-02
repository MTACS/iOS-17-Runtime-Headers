
@interface CAMViewfinderActionIntervalometer : NSObject {
    long long  __remaining;
    CAMPreciseTimer * __timer;
    CAMViewfinderViewController * __viewfinderViewController;
    double  _delay;
    <CAMViewfinderActionIntervalometerDelegate> * _delegate;
    double  _interval;
    long long  _maximumCount;
}

@property (nonatomic) long long _remaining;
@property (nonatomic, readonly) CAMPreciseTimer *_timer;
@property (nonatomic, readonly) CAMViewfinderViewController *_viewfinderViewController;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) <CAMViewfinderActionIntervalometerDelegate> *delegate;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) long long maximumCount;
@property (nonatomic, readonly) unsigned long long successfullActionCount;

- (void).cxx_destruct;
- (void)_attemptViewfinderActions;
- (long long)_remaining;
- (id)_timer;
- (id)_viewfinderViewController;
- (double)delay;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4 viewfinderViewController:(id)arg5;
- (double)interval;
- (void)manuallyGenerateRequest;
- (long long)maximumCount;
- (void)set_remaining:(long long)arg1;
- (void)startGeneratingRequests;
- (void)stopAttemptingActions;
- (unsigned long long)successfullActionCount;

@end
