
@protocol AFBluetoothDeviceInfoMutating <NSObject>

@required

- (void)setAddress:(NSString *)arg1;
- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setIsAdvancedAppleAudioDevice:(bool)arg1;
- (void)setName:(NSString *)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setSupportsAnnounceCall:(bool)arg1;
- (void)setSupportsInEarDetection:(bool)arg1;
- (void)setSupportsJustSiri:(bool)arg1;
- (void)setSupportsListeningModeANC:(bool)arg1;
- (void)setSupportsListeningModeAutomatic:(bool)arg1;
- (void)setSupportsListeningModeTransparency:(bool)arg1;
- (void)setSupportsSpokenNotification:(bool)arg1;
- (void)setSupportsVoiceTrigger:(bool)arg1;
- (void)setVendorID:(unsigned int)arg1;

@end
