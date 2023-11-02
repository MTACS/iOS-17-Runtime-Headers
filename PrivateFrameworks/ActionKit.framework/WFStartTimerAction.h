
@interface WFStartTimerAction : WFLinkCreateEntityAction

- (void)getValueForParameterData:(id)arg1 ofProcessedParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)parameterOverrides;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (id)sessionKitSessionConfiguration;
- (id)sessionKitSessionInvocationType;

@end
