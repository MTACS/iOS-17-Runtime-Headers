
@interface SiriSettingsIntents.OpenIntentHandler : NSObject <INOpenSettingIntentHandling> {
    void deviceState;
    void enableTelemetryForSignpost;
}

- (void).cxx_destruct;
- (void)handleOpenSetting:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
