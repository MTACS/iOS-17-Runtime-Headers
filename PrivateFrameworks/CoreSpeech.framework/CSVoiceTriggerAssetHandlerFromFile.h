
@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler * _onDeviceCompilationHandler;
}

- (void).cxx_destruct;
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)arg1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDisableOnDeviceCompilation:(bool)arg1;
- (void)start;
- (void)triggerAssetRefresh;

@end
