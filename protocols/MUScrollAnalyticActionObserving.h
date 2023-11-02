
@protocol MUScrollAnalyticActionObserving <NSObject>

@required

- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;

@end
