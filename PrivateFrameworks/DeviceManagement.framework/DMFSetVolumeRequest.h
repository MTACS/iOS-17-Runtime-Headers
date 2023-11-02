
@interface DMFSetVolumeRequest : DMFTaskRequest {
    float  _volume;
}

@property (nonatomic) float volume;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
