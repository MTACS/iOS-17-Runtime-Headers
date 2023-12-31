
@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings {
    NSDictionary * _audioSettings;
    NSArray * _metadata;
}

@property (nonatomic, copy) NSDictionary *audioSettings;
@property (nonatomic, copy) NSArray *metadata;

+ (bool)supportsSecureCoding;

- (id)audioSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)setAudioSettings:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
