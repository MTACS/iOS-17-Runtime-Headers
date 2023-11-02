
@interface ATXUserEducationSuggestionCustomizeFocusServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector * _connector;
    ATXDNDModeConfigurationClient * _modeConfigurationClient;
}

- (void).cxx_destruct;
- (void)_processModeChangeEvent:(id)arg1;
- (void)dealloc;
- (id)initWithConnector:(id)arg1;
- (void)processModeChangeEvent:(id)arg1;
- (void)sendSuggestion:(id)arg1 eventType:(unsigned long long)arg2;

@end
