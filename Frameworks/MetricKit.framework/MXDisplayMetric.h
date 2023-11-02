
@interface MXDisplayMetric : MXMetric {
    MXAverage * _averagePixelLuminance;
}

@property (readonly) MXAverage *averagePixelLuminance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averagePixelLuminance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAveragePictureLevel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;

@end
