
@interface CRKSetVolumeRequest : CATTaskRequest {
    double  _volume;
}

@property (nonatomic) double volume;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;

@end
