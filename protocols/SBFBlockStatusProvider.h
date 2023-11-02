
@protocol SBFBlockStatusProvider <NSObject>

@required

- (bool)isBlocked;
- (bool)isLiquidDetectionCriticalUIBlocked;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (bool)isThermallyBlocked;
- (bool)isUserRequestedEraseEnabled;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;

@end
