
@protocol MFStackModeConfigurable

@required

- (bool)isModeManagedSession;
- (bool)isModeShared;
- (bool)isModeSolo;
- (NSString *)modeDescription;
- (void)setupForManagedSessionWithAudioSession:(AVAudioSession *)arg1;
- (void)setupForShared;
- (void)setupForSolo;

@end
