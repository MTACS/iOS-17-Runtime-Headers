
@interface _TtC15FocusSettingsUIP33_505BD96902FEE6013A0D99281DBB05A426FocusStatusSettingsManager : NSObject <DNDModeConfigurationServiceListener> {
    void cachedConfigurations;
    void cachedModes;
    void clientIdentifier;
    void globalConfigurationService;
    void isListeningToGlobalConfigurationService;
    void isListeningToModeConfigurationService;
    void modeConfigurationService;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;

@end
