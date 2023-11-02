
@interface MADVIRectangleDetectionResult : MADResult {
    NSArray * _observations;
}

@property (nonatomic, readonly) NSArray *observations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObservations:(id)arg1;
- (id)observations;

@end
