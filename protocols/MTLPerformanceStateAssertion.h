
@protocol MTLPerformanceStateAssertion <NSObject>

@required

- (long long)requestedPerformanceState;
- (bool)wasPerformanceStateAssertionMaintained;

@end
