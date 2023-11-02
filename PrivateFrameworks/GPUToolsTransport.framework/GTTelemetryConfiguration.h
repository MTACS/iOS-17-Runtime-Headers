
@interface GTTelemetryConfiguration : NSObject <NSSecureCoding> {
    float  _reportFrequencyInSeconds;
}

@property (nonatomic) float reportFrequencyInSeconds;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)reportFrequencyInSeconds;
- (void)setReportFrequencyInSeconds:(float)arg1;

@end
