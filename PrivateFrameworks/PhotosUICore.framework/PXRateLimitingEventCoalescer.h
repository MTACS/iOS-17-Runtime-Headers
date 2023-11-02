
@interface PXRateLimitingEventCoalescer : PXEventCoalescer {
    bool  _cancelled;
    double  _lastSignalTime;
    double  _rate;
    bool  _waitingForCallback;
}

@property (nonatomic, readonly) double rate;

- (void)_handleTimer;
- (void)cancel;
- (id)init;
- (id)initWithRate:(double)arg1;
- (void)inputEvent;
- (double)rate;
- (void)signalObservers;

@end
