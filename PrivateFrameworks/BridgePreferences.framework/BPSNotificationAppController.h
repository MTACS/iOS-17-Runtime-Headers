
@interface BPSNotificationAppController : BPSListController {
    NPSDomainAccessor * _bbAppsSettings;
    BBSectionInfo * _bbSectionInfo;
    NSString * _bundleIdentifier;
    bool  _mirrorSettings;
    NSMutableArray * _notificationApplicationSpecifiers;
    NSMutableArray * _notificationSpecifiers;
    NSMutableDictionary * _sectionInfo;
    unsigned long long  _settingsMode;
}

@property (nonatomic, readonly) unsigned long long alertingMode;
@property (nonatomic, retain) NPSDomainAccessor *bbAppsSettings;
@property (nonatomic, retain) BBSectionInfo *bbSectionInfo;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool mirrorSettings;
@property (nonatomic, retain) NSMutableArray *notificationApplicationSpecifiers;
@property (nonatomic, readonly) NSMutableArray *notificationSpecifiers;
@property (nonatomic, readonly) PSSpecifier *previewSwitchSpecifier;
@property (nonatomic, readonly) NSMutableDictionary *sectionInfo;
@property (nonatomic) unsigned long long settingsMode;
@property (nonatomic, readonly) bool showAlerts;
@property (nonatomic, readonly) bool showPreview;

- (void).cxx_destruct;
- (void)_showSettingsNotifications;
- (bool)_suppressSendToNotificationCenterOption;
- (long long)alertType;
- (unsigned long long)alertingMode;
- (id)applicationBundleIdentifier;
- (id)applicationGroupSpecifiers;
- (id)bbAppsSettings;
- (id)bbSectionInfo;
- (id)bulletinBoardSettings;
- (id)bundle;
- (id)bundleIdentifier;
- (bool)caresAboutSubsections;
- (id)customGroupSpecifierForDescription:(id)arg1;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (id)init;
- (id)localizedMirroringDetailFooter;
- (id)localizedPaneTitle;
- (id)localizedPreviewChoiceTitle;
- (id)localizedPreviewGroupFooter;
- (id)localizedPreviewGroupLabel;
- (bool)mirrorSettings;
- (void)mirrorSettingsChanged:(bool)arg1;
- (id)mirroredApplicationGroupSpecifiers;
- (id)notificationApplicationSpecifiers;
- (id)notificationGroupTitles;
- (id)notificationGroupValues;
- (id)notificationGroupingValue:(id)arg1;
- (id)notificationSpecifiers;
- (id)previewSwitchSpecifier;
- (void)removeAlertOptions;
- (void)removeMirrorOptions;
- (void)removeNotificationCoalescingOptions;
- (void)removeSendToNotificationCenterOption;
- (id)sectionInfo;
- (id)sectionInfoForBBSectionInfo:(id)arg1;
- (void)setAlertingMode:(unsigned long long)arg1;
- (void)setBbAppsSettings:(id)arg1;
- (void)setBbSectionInfo:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setMirrorSettings:(bool)arg1;
- (void)setNotificationApplicationSpecifiers:(id)arg1;
- (void)setNotificationGroupingValue:(id)arg1 specifier:(id)arg2;
- (void)setSettingsMode:(unsigned long long)arg1;
- (void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2;
- (unsigned long long)settingsMode;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)showAlerts;
- (bool)showPreview;
- (id)showPreviewValue:(id)arg1;
- (id)soundsValue:(id)arg1;
- (id)specifiers;
- (bool)suppressAlertSpecifiers;
- (bool)suppressAllMirrorSpecifiers;
- (bool)suppressMirrorOption;
- (bool)suppressNotificationCoalescingOptions;
- (bool)suppressSendToNotificationCenterOption;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSubsections;
- (id)vibrationValue:(id)arg1;
- (bool)wantsPreviewChoice;
- (bool)watchHasCapabilitySendToNotificationCenter;
- (void)writeSectionState;

@end