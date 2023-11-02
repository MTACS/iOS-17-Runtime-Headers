
@interface GTTelemetryUpdateConfiguration : GTTelemetryRequest <NSSecureCoding> {
    GTTelemetryConfiguration * _configuration;
}

@property (nonatomic, retain) GTTelemetryConfiguration *configuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfiguration:(id)arg1;

@end
