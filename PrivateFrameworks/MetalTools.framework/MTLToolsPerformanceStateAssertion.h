
@interface MTLToolsPerformanceStateAssertion : MTLToolsObject <MTLPerformanceStateAssertion>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long requestedPerformanceState;
@property (readonly) Class superclass;
@property (readonly) bool wasPerformanceStateAssertionMaintained;

- (long long)requestedPerformanceState;
- (bool)wasPerformanceStateAssertionMaintained;

@end
