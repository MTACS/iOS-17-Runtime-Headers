
@interface ARLightEstimate : NSObject <NSSecureCoding> {
    double  _ambientColorTemperature;
    double  _ambientIntensity;
}

@property (nonatomic, readonly) double ambientColorTemperature;
@property (nonatomic, readonly) double ambientIntensity;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;

+ (bool)supportsSecureCoding;

- (double)ambientColorTemperature;
- (double)ambientIntensity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)sphericalHarmonicsCoefficients;

@end
