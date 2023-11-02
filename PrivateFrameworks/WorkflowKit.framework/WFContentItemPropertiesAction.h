
@interface WFContentItemPropertiesAction : WFContentItemAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (id)contentDestinationWithError:(id*)arg1;
- (id)descriptionSummary;
- (void)finishWithItems:(id)arg1 property:(id)arg2 coercionPerformed:(bool)arg3;
- (id)inputParameterKey;
- (bool)inputRequired;
- (id)keywords;
- (id)localizedDefaultOutputName;
- (id)localizedDescriptionResult;
- (id)name;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)parameterDefinitions;
- (id)parameterSummary;
- (id)properties;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)selectedProperty;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;

@end
