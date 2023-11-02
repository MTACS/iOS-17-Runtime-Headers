
@interface FMDGenericAudioAccessory : NSObject <FMDAccessory, FMDAudioAccessory, NSSecureCoding> {
    FMDAccessoryIdentifier * _accessoryIdentifier;
    FMDAudioAccessoryInfo * _audioAccessoryInfo;
    NSString * _audioRoutingIdentifier;
    NSURL * _audioURL;
    bool  _supportsChangingListeningMode;
}

@property (nonatomic, retain) FMDAccessoryIdentifier *accessoryIdentifier;
@property (nonatomic, retain) FMDAudioAccessoryInfo *audioAccessoryInfo;
@property (nonatomic, retain) NSString *audioRoutingIdentifier;
@property (nonatomic, readonly) unsigned long long audioSafetyStatus;
@property (nonatomic, retain) NSURL *audioURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool playingSound;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsChangingListeningMode;

+ (id)copyAccessory:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)audioAccessoryInfo;
- (id)audioRoutingIdentifier;
- (unsigned long long)audioSafetyStatus;
- (id)audioURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryId:(id)arg1 audioRoutingIdentifier:(id)arg2 audioURL:(id)arg3 audioAccessoryInfo:(id)arg4 supportsChangingListeningMode:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)playingSound;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAudioAccessoryInfo:(id)arg1;
- (void)setAudioRoutingIdentifier:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setSupportsChangingListeningMode:(bool)arg1;
- (bool)supportsChangingListeningMode;
- (bool)updateAudioAsset:(id)arg1;
- (bool)updatePlaybackChannels:(id)arg1;

@end
