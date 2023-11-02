
@protocol _PMCoreSmartPowerNapProtocol

@required

- (void)registerWithIdentifier:(NSString *)arg1;
- (void)setCSPNIgnoreRemoteClient:(unsigned int)arg1;
- (void)setCSPNMotionAlarmStartThreshold:(unsigned int)arg1;
- (void)setCSPNMotionAlarmThreshold:(unsigned int)arg1;
- (void)setCSPNQueryDelta:(unsigned int)arg1;
- (void)setCSPNRequeryDelta:(unsigned int)arg1;
- (void)setState:(unsigned char)arg1;
- (void)syncStateWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned char, void*
- (void)unregisterWithIdentifier:(NSString *)arg1;

@end
