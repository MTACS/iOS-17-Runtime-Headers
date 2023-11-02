
@protocol DNDSModeAssertionUpdateContext <DNDSModeAssertionQuerying>

@required

- (DNDSModeAssertionUpdateResult *)invalidateAssertionsForRequest:(DNDSModeAssertionInvalidationRequest *)arg1;
- (DNDSModeAssertionUpdateResult *)takeAssertionWithDetails:(DNDModeAssertionDetails *)arg1 source:(DNDModeAssertionSource *)arg2 startDate:(NSDate *)arg3;

@end
