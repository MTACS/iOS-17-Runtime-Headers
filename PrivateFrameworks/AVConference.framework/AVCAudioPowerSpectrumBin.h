
@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding> {
    float  _maxFrequency;
    float  _minFrequency;
    float  _powerLevel;
}

@property (nonatomic, readonly) float maxFrequency;
@property (nonatomic, readonly) float minFrequency;
@property (nonatomic, readonly) float powerLevel;

+ (bool)supportsSecureCoding;

- (void)assign:(const struct _VCAudioPowerSpectrumEntry { struct _VCRange { float x_1_1_1; float x_1_1_2; } x1; float x2; }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)maxFrequency;
- (float)minFrequency;
- (float)powerLevel;

@end
