
@interface WBSSafariSettingsSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    WBSDiagnosticStateCollector * _stateCollector;
}

- (void).cxx_destruct;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)registerDiagnosticInfo:(id)arg1;
- (void)registerDiagnosticWithPayloadProvider:(id /* block */)arg1;
- (void)saveSettingWithDictionaryRepresentation:(id)arg1 successCompletionHandler:(id /* block */)arg2;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)arg1 isLightAppearance:(bool)arg2 successCompletionHandler:(id /* block */)arg3;
- (bool)syncEnabled;
- (void)syncPerSiteSettingsDownWithCompletion:(id /* block */)arg1;
- (void)syncPerSiteSettingsUpWithCompletion:(id /* block */)arg1;
- (void)syncSettingsDownWithCompletion:(id /* block */)arg1;
- (void)syncSettingsUpWithCompletion:(id /* block */)arg1;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;

@end
