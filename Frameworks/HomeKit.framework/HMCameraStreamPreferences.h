
@interface HMCameraStreamPreferences : NSObject <NSSecureCoding> {
    HMCameraStreamAudioPreferences * _audioPreferences;
    long long  _minimumRequiredAvailableOrInUseStreams;
    bool  _shouldTakeOwnershipOfExistingStream;
    HMCameraStreamVideoPreferences * _videoPreferences;
}

@property (retain) HMCameraStreamAudioPreferences *audioPreferences;
@property long long minimumRequiredAvailableOrInUseStreams;
@property bool shouldTakeOwnershipOfExistingStream;
@property (retain) HMCameraStreamVideoPreferences *videoPreferences;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioPreferences;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)minimumRequiredAvailableOrInUseStreams;
- (void)setAudioPreferences:(id)arg1;
- (void)setMinimumRequiredAvailableOrInUseStreams:(long long)arg1;
- (void)setShouldTakeOwnershipOfExistingStream:(bool)arg1;
- (void)setVideoPreferences:(id)arg1;
- (bool)shouldTakeOwnershipOfExistingStream;
- (id)videoPreferences;

@end
