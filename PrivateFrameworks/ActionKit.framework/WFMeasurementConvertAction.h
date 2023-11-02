
@interface WFMeasurementConvertAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (id)currentUnitType;
- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)unitParameter;
- (id)unitWithSymbol:(id)arg1;

@end
