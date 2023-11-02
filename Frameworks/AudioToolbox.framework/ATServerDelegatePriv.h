
@interface ATServerDelegatePriv : NSObject <AVAudioSessionServerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)dolbyDigitalEncoderAvailable;
- (void)handleCategoryOrModeChange:(unsigned int)arg1;
- (int)handleInterruptionWithID:(unsigned int)arg1 clientPID:(int)arg2 interruptionState:(unsigned int)arg3 interruptionInfo:(id)arg4;
- (int)muteSessionInput:(unsigned int)arg1 clientPID:(int)arg2 muted:(bool)arg3;
- (int)refreshRecordPermissions:(const struct { unsigned int x1[8]; }*)arg1;
- (void)setTelephonyClientSessionID:(unsigned int)arg1;
- (bool)spatialAudioEnabled:(unsigned int)arg1 mode:(id)arg2;
- (id)spatialPreferencesForSession:(unsigned int)arg1 contentType:(unsigned int)arg2;

@end
