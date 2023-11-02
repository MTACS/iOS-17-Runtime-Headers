
@protocol AFAudioSessionCoordinationSnapshotMutating <NSObject>

@required

- (void)setCurrentOrUpNextDateInterval:(NSDateInterval *)arg1;
- (void)setIsAudioSessionActive:(bool)arg1;
- (void)setLocalActiveAssertionContexts:(NSArray *)arg1;
- (void)setLocalDevice:(AFAudioSessionCoordinationDeviceInfo *)arg1;
- (void)setLocalPendingAssertionContexts:(NSArray *)arg1;
- (void)setRemoteActiveAssertionContexts:(NSArray *)arg1;
- (void)setRemoteDisqualifiedDevices:(NSArray *)arg1;
- (void)setRemotePendingAssertionContexts:(NSArray *)arg1;
- (void)setRemoteQualifiedInRangeDevices:(NSArray *)arg1;
- (void)setRemoteQualifiedOutOfRangeDevices:(NSArray *)arg1;

@end
