
@interface MADVIMachineReadableCodeDetectionResult : MADResult {
    NSArray * _observations;
}

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (nonatomic, readonly) NSArray *observations;
@property (nonatomic, readonly) NSArray *resultItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)executionNanoseconds;
- (double)executionTimeInterval;
- (id)initWithCoder:(id)arg1;
- (id)initWithObservations:(id)arg1;
- (id)observations;
- (id)resultItems;

@end
