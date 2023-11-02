
@interface PRRenderingSession : NSObject {
    <PRInvalidatable> * _assertion;
    double  _timeRemaining;
}

@property (nonatomic, readonly) <PRInvalidatable> *assertion;
@property (nonatomic, readonly) double timeRemaining;

- (void).cxx_destruct;
- (id)assertion;
- (id)initWithReason:(id)arg1 invalidationBlock:(id /* block */)arg2;
- (double)timeRemaining;

@end
