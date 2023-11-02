
@interface AUAudioTapIOUnit : AUHALOutputUnit

@property (nonatomic, retain) ATAudioTap *audioTap;

- (id)audioTap;
- (void)setAudioTap:(id)arg1;

@end
