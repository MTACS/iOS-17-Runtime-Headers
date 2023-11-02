
@interface ATXPETEventTracker2Logger : NSObject <ATXPETEventTracker2Protocol>

- (void)logMessage:(id)arg1;
- (void)trackDistributionForMessage:(id)arg1 value:(double)arg2;
- (void)trackScalarForMessage:(id)arg1;
- (void)trackScalarForMessage:(id)arg1 count:(int)arg2;

@end
