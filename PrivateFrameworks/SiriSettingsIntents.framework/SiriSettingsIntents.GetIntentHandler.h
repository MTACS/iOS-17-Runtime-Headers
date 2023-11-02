
@interface SiriSettingsIntents.GetIntentHandler : NSObject <INGetSettingIntentHandling> {
    void confirmationConfigProvider;
    void settingIdentifierHandlers;
}

- (void).cxx_destruct;
- (void)confirmGetSetting:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetSetting:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
