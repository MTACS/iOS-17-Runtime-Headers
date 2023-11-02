
@interface WFReversibleLinkAction : WFLinkAction

+ (Class)settingsClientClass;

- (void)finishRunningWithError:(id)arg1;
- (void)getValueForParameterData:(id)arg1 ofProcessedParameters:(id)arg2 fallingBackToDefaultValue:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)reversibleSettingParameterKey;

@end
