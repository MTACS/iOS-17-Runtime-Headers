
@interface WFMeasurementCreateAction : WFAction

- (id)currentUnit;
- (id)currentUnitTypeState;
- (id)currentValue;
- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)unitParameter;

@end
