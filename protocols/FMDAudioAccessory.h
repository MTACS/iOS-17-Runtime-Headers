
@protocol FMDAudioAccessory <NSObject>

@required

- (FMDAudioAccessoryInfo *)audioAccessoryInfo;
- (NSString *)audioRoutingIdentifier;
- (unsigned long long)audioSafetyStatus;
- (NSURL *)audioURL;
- (bool)playingSound;
- (bool)updateAudioAsset:(id <FMDAsset>)arg1;
- (bool)updatePlaybackChannels:(NSArray *)arg1;

@optional

- (bool)shouldStopSoundNow;
- (bool)supportsChangingListeningMode;

@end
