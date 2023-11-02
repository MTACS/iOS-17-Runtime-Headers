
@interface AFEnablementFlowConfigurationProvider : NSObject {
    AFSettingsConnection * _settingsConnection;
}

@property (nonatomic, retain) AFSettingsConnection *settingsConnection;

+ (id)_createConfigurationForParameters:(id)arg1;
+ (void)_emitEnablementFlowLoggingForConfigurationParameters:(id)arg1 didEnable:(bool)arg2;
+ (bool)_shouldAllowRandomVoiceSelectionForEnablementFlow:(long long)arg1;

- (void).cxx_destruct;
- (void)_resolveIfNewUserWithParameters:(id)arg1 forRecognitionLanguages:(id)arg2 completion:(id /* block */)arg3;
- (void)_resolveVoiceSelection:(id)arg1 forRecognitionLanguages:(id)arg2 completion:(id /* block */)arg3;
- (id)_storedRecognitionLanguageCode;
- (id)_storedVoiceInfo;
- (void)configurationForEnablementFlow:(long long)arg1 recognitionLanguageCodes:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setSettingsConnection:(id)arg1;
- (id)settingsConnection;

@end
