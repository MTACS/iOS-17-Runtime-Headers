
@interface CKKeepMessagesSelectionList : PSListController {
    NSArray * _durationPreferenceTitles;
    NSArray * _durationPreferenceValues;
    CKKeepMessagesPreferenceManager * _keepMessagesPreferenceManager;
    long long  _selectedKeepMessagesPreferenceIndex;
}

@property (nonatomic, retain) NSArray *durationPreferenceTitles;
@property (nonatomic, retain) NSArray *durationPreferenceValues;
@property (nonatomic, retain) CKKeepMessagesPreferenceManager *keepMessagesPreferenceManager;
@property (nonatomic) long long selectedKeepMessagesPreferenceIndex;

- (void).cxx_destruct;
- (void)_configureInitialSelectedIndexes;
- (void)_internalInit;
- (void)_selectionListDidSelectIndexPath:(id)arg1;
- (void)_syncedSettingsDidChange:(id)arg1;
- (void)_updatePreferenceAtIndexPath:(id)arg1;
- (void)_warnAboutDeletingMessagesForSelectedListItem:(id)arg1;
- (void)_warnForFinalConfirmationForUpdatingIndexPath:(id)arg1;
- (void)dealloc;
- (id)durationPreferenceTitles;
- (id)durationPreferenceValues;
- (id)init;
- (id)keepMessagesPreferenceManager;
- (long long)selectedKeepMessagesPreferenceIndex;
- (void)setDurationPreferenceTitles:(id)arg1;
- (void)setDurationPreferenceValues:(id)arg1;
- (void)setKeepMessagesPreferenceManager:(id)arg1;
- (void)setSelectedKeepMessagesPreferenceIndex:(long long)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateKeepMessagesPreference:(id)arg1;

@end
