
@interface SiriSettingsIntents.SetBinaryIntentHandler : NSObject <INSetBinarySettingIntentHandling> {
    void confirmationConfigProvider;
    void deviceState;
    void setHandlerProvider;
    void settingsFeatureFlags;
}

- (void).cxx_destruct;
- (void)confirmSetBinarySetting:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetBinarySetting:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
