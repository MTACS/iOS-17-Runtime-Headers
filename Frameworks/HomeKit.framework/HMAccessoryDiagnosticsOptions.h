
@interface HMAccessoryDiagnosticsOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _delay;
    bool  _enableAudioClips;
    NSNumber * _logSize;
    bool  _metadataRequired;
    bool  _recordAudio;
    long long  _snapshotType;
}

@property (nonatomic, readonly) NSNumber *delay;
@property (nonatomic, readonly) bool enableAudioClips;
@property (nonatomic, readonly) NSNumber *logSize;
@property (nonatomic, readonly) bool metadataRequired;
@property (nonatomic, readonly) bool recordAudio;
@property (nonatomic, readonly) long long snapshotType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delay;
- (bool)enableAudioClips;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLogSizeBytes:(id)arg1 delaySeconds:(id)arg2 snapshotType:(long long)arg3 recordAudio:(bool)arg4 enableAudioClips:(bool)arg5 cloudkitMetadataRequired:(bool)arg6;
- (id)logSize;
- (bool)metadataRequired;
- (id)payloadMetadata;
- (bool)recordAudio;
- (long long)snapshotType;

@end
