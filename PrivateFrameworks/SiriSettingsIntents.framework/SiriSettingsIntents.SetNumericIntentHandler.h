
@interface SiriSettingsIntents.SetNumericIntentHandler : NSObject <INSetNumericSettingIntentHandling> {
    void confirmationConfigProvider;
    void setHandlerProvider;
    void setupHandler;
}

- (void).cxx_destruct;
- (void)confirmSetNumericSetting:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetNumericSetting:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
