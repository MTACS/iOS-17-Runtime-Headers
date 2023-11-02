
@interface BCSWiFiConfigurationAction : BCSAction

- (bool)_startAirplaySetupIfNeeded;
- (id)_wiFiConfigurationData;
- (id)actionIcon;
- (id)actionPickerItems;
- (id)debugDescriptionExtraInfoDictionary;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (bool)isWiFiAction;
- (id)localizedDefaultActionDescription;
- (void)performDefaultAction;
- (void)performDefaultActionWithCompletionHandler:(id /* block */)arg1;

@end
