
@protocol VCAudioStreamGroup

@required

- (int)deviceRole;
- (bool)isMuted;
- (bool)isPowerSpectrumEnabled;
- (bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (void)setMuted:(bool)arg1;
- (void)setPowerSpectrumEnabled:(bool)arg1;

@end
