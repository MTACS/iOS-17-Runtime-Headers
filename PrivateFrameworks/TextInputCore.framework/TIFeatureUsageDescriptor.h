
@interface TIFeatureUsageDescriptor : TINumericValueDescriptor {
    NSString * _configString;
    NSString * _discoveryCounter;
    long long  _discoveryThreshold;
}

@property (nonatomic, readonly) NSString *configString;
@property (nonatomic, readonly) NSString *discoveryCounter;
@property (nonatomic, readonly) long long discoveryThreshold;

+ (id)featureUsageDescriptorWithMetricName:(id)arg1 discoveryCounter:(id)arg2 discoveryThreshold:(long long)arg3 configString:(id)arg4 calculationExpression:(id)arg5 calculationPrecondition:(id)arg6 calculationDefaultValue:(id)arg7 calculationDependencies:(id)arg8 bucketThresholds:(id)arg9;

- (void).cxx_destruct;
- (id)configString;
- (id)discoveryCounter;
- (long long)discoveryThreshold;
- (id)initWithMetricName:(id)arg1 discoveryCounter:(id)arg2 discoveryThreshold:(long long)arg3 configString:(id)arg4 calculationExpression:(id)arg5 calculationPrecondition:(id)arg6 calculationDefaultValue:(id)arg7 calculationDependencies:(id)arg8 bucketThresholds:(id)arg9;

@end
