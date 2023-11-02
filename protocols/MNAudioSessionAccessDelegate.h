
@protocol MNAudioSessionAccessDelegate <NSObject>

@optional

- (void)audioSessionResourceAccess:(MNAudioSessionResourceAccess *)arg1 didActivateSession:(bool)arg2;
- (void)audioSessionResourceAccess:(MNAudioSessionResourceAccess *)arg1 didDeactivateSession:(bool)arg2;
- (void)audioSessionResourceAccess:(MNAudioSessionResourceAccess *)arg1 didFailWhileActivatingSession:(NSError *)arg2;
- (void)audioSessionResourceAccess:(MNAudioSessionResourceAccess *)arg1 didFailWhileDeactivatingSession:(NSError *)arg2;
- (void)audioSessionResourceAccess:(MNAudioSessionResourceAccess *)arg1 didFailWhileSettingChannelCount:(NSError *)arg2;
- (void)audioSessionResourceAccess:(MNAudioSessionResourceAccess *)arg1 didSetChannelCount:(bool)arg2;

@end
