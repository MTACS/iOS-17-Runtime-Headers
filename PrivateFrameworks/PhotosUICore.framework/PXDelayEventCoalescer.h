
@interface PXDelayEventCoalescer : PXEventCoalescer {
    bool  _cancelled;
    double  _delay;
    double  _lastEventTime;
    bool  _waitingForCallback;
}

@property (nonatomic, readonly) double delay;

- (void)_handleTimer;
- (void)cancel;
- (double)delay;
- (id)init;
- (id)initWithDelay:(double)arg1;
- (void)inputEvent;

@end
