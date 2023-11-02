
@interface HUAccessorySettingsSiriRecognitionLanguageViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol> {
    NAFuture * _changeLanguageFuture;
    long long  _selectedLanguageIndex;
}

@property (nonatomic, retain) NAFuture *changeLanguageFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager;
@property (nonatomic) long long selectedLanguageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allMediaAccessories;
- (void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg1;
- (void)_changeSiriLanguageOnlyForThisMediaAccessory:(id)arg1 turnOffVoiceID:(bool)arg2;
- (void)_clearSpinner;
- (bool)_isAnyMediaAccessoryOnSupportedVoiceRecognitionLanguage;
- (void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg1 indexPath:(id)arg2;
- (void)_presentAlertConfirmingLanguageChangeForThisORAllMediaAccessories:(id)arg1 indexPath:(id)arg2;
- (bool)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg1;
- (id)_siriLanguageOptionForMediaProfile:(id)arg1;
- (void)_turnOffVoiceIDAndChangeSiriLanguageForAllMediaAccessories:(id)arg1;
- (void)_turnOffVoiceIDForTargetLanguageOption:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)changeLanguageFuture;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (long long)selectedLanguageIndex;
- (void)setChangeLanguageFuture:(id)arg1;
- (void)setSelectedLanguageIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
