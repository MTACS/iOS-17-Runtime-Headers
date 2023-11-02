
@interface MXPreferredVolumeManager : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)postNotification:(id)arg1 category:(id)arg2 mode:(id)arg3 volume:(float)arg4 rampUpwardDuration:(float)arg5 rampDownwardDuration:(float)arg6 silenceVolumeHUD:(bool)arg7 reason:(id)arg8 refCon:(id)arg9 sequenceNumber:(long long)arg10;

@end
