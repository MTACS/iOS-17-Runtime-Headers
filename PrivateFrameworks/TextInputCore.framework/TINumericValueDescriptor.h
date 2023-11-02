
@interface TINumericValueDescriptor : TIMetricDescriptor {
    NSArray * _bucketThresholds;
    NSArray * _bucketValues;
    NSNumber * _calculationDefaultValue;
    NSArray * _calculationDependencies;
    NSString * _calculationExpression;
    NSString * _calculationPrecondition;
}

@property (nonatomic, readonly) NSArray *bucketThresholds;
@property (nonatomic, readonly) NSArray *bucketValues;
@property (nonatomic, readonly) NSNumber *calculationDefaultValue;
@property (nonatomic, readonly) NSArray *calculationDependencies;
@property (nonatomic, readonly) NSString *calculationExpression;
@property (nonatomic, readonly) NSString *calculationPrecondition;

+ (id)numericValueDescriptorWithMetricName:(id)arg1 calculationExpression:(id)arg2 calculationPrecondition:(id)arg3 calculationDefaultValue:(id)arg4 calculationDependencies:(id)arg5 bucketThresholds:(id)arg6 bucketValues:(id)arg7;

- (void).cxx_destruct;
- (id)bucketThresholds;
- (id)bucketValues;
- (id)calculationDefaultValue;
- (id)calculationDependencies;
- (id)calculationExpression;
- (id)calculationPrecondition;
- (id)initWithMetricName:(id)arg1 calculationExpression:(id)arg2 calculationPrecondition:(id)arg3 calculationDefaultValue:(id)arg4 calculationDependencies:(id)arg5 bucketThresholds:(id)arg6 bucketValues:(id)arg7;

@end
