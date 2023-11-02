
@protocol _PMSmartPowerNapProtocol

@required

- (void)registerWithIdentifier:(NSString *)arg1;
- (void)setSPNMotionAlarmStartThreshold:(unsigned int)arg1;
- (void)setSPNMotionAlarmThreshold:(unsigned int)arg1;
- (void)setSPNReentryCoolOffPeriod:(unsigned int)arg1;
- (void)setSPNReentryDelaySeconds:(unsigned int)arg1;
- (void)setSPNRequeryDelta:(unsigned int)arg1;
- (void)setState:(unsigned char)arg1;
- (void)syncStateWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned char, void*
- (void)unregisterWithIdentifier:(NSString *)arg1;

@end
