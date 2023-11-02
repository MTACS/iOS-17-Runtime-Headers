
@protocol _INPBVoiceCommandDeviceInformation <NSObject>

@required

- (int)StringAsDeviceIdiom:(NSString *)arg1;
- (int)deviceIdiom;
- (NSString *)deviceIdiomAsString:(int)arg1;
- (bool)hasDeviceIdiom;
- (bool)hasIsHomePodInUltimateMode;
- (bool)isHomePodInUltimateMode;
- (void)setDeviceIdiom:(int)arg1;
- (void)setHasDeviceIdiom:(bool)arg1;
- (void)setHasIsHomePodInUltimateMode:(bool)arg1;
- (void)setIsHomePodInUltimateMode:(bool)arg1;

@end
