
@interface TIMetricDescriptorParser : TIDescriptorParser

- (id)descriptionFromDependencyChain:(id)arg1 andDependencyName:(id)arg2;
- (void)findInvalidDependencyChain:(id)arg1 forMetricDescriptor:(id)arg2 fromMetricDescriptors:(id)arg3 andInvalidMetricNames:(id)arg4 invalidMetricDescriptors:(id)arg5 errors:(id)arg6;
- (id)init;
- (id)parseBucketThresholdsFromConfig:(id)arg1 isFeatureUsageDescriptor:(bool)arg2 errors:(id)arg3;
- (id)parseBucketValuesFromConfig:(id)arg1 forBucketThresholds:(id)arg2 isFeatureUsageDescriptor:(bool)arg3 errors:(id)arg4;
- (id)parseCalculationDefaultValueFromConfig:(id)arg1 forExpression:(id)arg2 andPrecondition:(id)arg3 errors:(id)arg4;
- (id)parseCalculationDependenciesFromConfig:(id)arg1 forExpression:(id)arg2 errors:(id)arg3;
- (id)parseCalculationPreconditionFromConfig:(id)arg1 forExpression:(id)arg2 errors:(id)arg3;
- (id)parseContextValueDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (id)parseFeatureUsageDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (id)parseMetricDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (void)parseMetricDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4;
- (id)parseNumericValueDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (id)parseSettingValueDescriptorWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;

@end
