
@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject {
    NSNumber * _bitRate;
    long long  _sampleRate;
}

@property (readonly) NSNumber *bitRate;
@property (readonly) long long sampleRate;

- (void).cxx_destruct;
- (id)bitRate;
- (id)description;
- (id)initWithSampleRate:(long long)arg1 bitRate:(id)arg2;
- (long long)sampleRate;

@end
