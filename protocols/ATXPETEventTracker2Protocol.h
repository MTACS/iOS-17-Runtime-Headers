
@protocol ATXPETEventTracker2Protocol

@required

- (void)logMessage:(PBCodable *)arg1;
- (void)trackDistributionForMessage:(PBCodable *)arg1 value:(double)arg2;
- (void)trackScalarForMessage:(PBCodable *)arg1;
- (void)trackScalarForMessage:(PBCodable *)arg1 count:(int)arg2;

@end
