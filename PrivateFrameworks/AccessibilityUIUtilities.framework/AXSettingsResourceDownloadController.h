
@interface AXSettingsResourceDownloadController : AXUISettingsListController <AXResourceDownloadInformationDelegate> {
    id /* block */  _getDialectPreferencesCallback;
    id /* block */  _getPerVoiceSettingsCallack;
    id /* block */  _getVoiceAllowedCallback;
    double  _latestProgress;
    id /* block */  _setDialectPreferencesCallback;
    id /* block */  _setPerVoiceSettingsCallack;
    bool  _showPerVoiceSettings;
    AXSpeechSettingsModelController * _speechModelController;
    NSString * _speechSourceKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *downloadProgessByVoiceID;
@property (nonatomic, copy) id /* block */ getDialectPreferencesCallback;
@property (nonatomic, copy) id /* block */ getPerVoiceSettingsCallack;
@property (nonatomic, copy) id /* block */ getVoiceAllowedCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ setDialectPreferencesCallback;
@property (nonatomic, copy) id /* block */ setPerVoiceSettingsCallack;
@property (nonatomic) bool showPerVoiceSettings;
@property (nonatomic, retain) AXSpeechSettingsModelController *speechModelController;
@property (nonatomic, retain) NSString *speechSourceKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowedToDownload;
- (void)deleteResource:(id)arg1;
- (id)downloadProgessByVoiceID;
- (void)downloadProgressUpdate:(id)arg1 progress:(float)arg2;
- (void)finishedDeletingResource:(id)arg1;
- (void)finishedDownloadingResource:(id)arg1;
- (id /* block */)getDialectPreferencesCallback;
- (id /* block */)getPerVoiceSettingsCallack;
- (id /* block */)getVoiceAllowedCallback;
- (id)getVoiceSettingsForVoice:(id)arg1;
- (id)init;
- (void)manageEditButton;
- (void)openVoiceSettingsFor:(id)arg1;
- (void)playSampleForResource:(id)arg1 completion:(id /* block */)arg2;
- (void)restoreDownloadProgress;
- (id /* block */)setDialectPreferencesCallback;
- (void)setGetDialectPreferencesCallback:(id /* block */)arg1;
- (void)setGetPerVoiceSettingsCallack:(id /* block */)arg1;
- (void)setGetVoiceAllowedCallback:(id /* block */)arg1;
- (id /* block */)setPerVoiceSettingsCallack;
- (void)setSelectedSpecifier:(id)arg1;
- (void)setSetDialectPreferencesCallback:(id /* block */)arg1;
- (void)setSetPerVoiceSettingsCallack:(id /* block */)arg1;
- (void)setShowPerVoiceSettings:(bool)arg1;
- (void)setSpeechModelController:(id)arg1;
- (void)setSpeechSourceKey:(id)arg1;
- (bool)showPerVoiceSettings;
- (id)specifierForVoiceId:(id)arg1;
- (id)speechModelController;
- (id)speechSourceKey;
- (void)startDownloadForResource:(id)arg1;
- (void)stopDownloadForResource:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateSettings;
- (void)voiceSettingsDidChangeForVoice:(id)arg1 settings:(id)arg2;

@end
