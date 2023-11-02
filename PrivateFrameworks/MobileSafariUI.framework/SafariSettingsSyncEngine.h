
@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine {
    WBSStartPageSectionManager * _lazyStartPageSectionsManager;
    <WBSUserDefaultObservation> * _wallpaperDefaultsObservation;
}

- (void).cxx_destruct;
- (void)_backgroundImageChanged:(id)arg1;
- (void)_cloudBackgroundImageDidUpdateOnServer:(id)arg1;
- (void)_cloudBackgroundImageWasDeletedOnServer:(id)arg1;
- (void)_cloudSettingsDidUpdateOnServer:(id)arg1;
- (void)_customizationPaletteWasDismissed:(id)arg1;
- (void)_didUpdateStartPageBackgroundImageVisibility;
- (void)_didUpdateStartPageSectionOrder:(id)arg1;
- (void)_didUpdateStartPageVisibility:(id)arg1;
- (id)_sectionIdentifierToSettingName:(id)arg1;
- (id)init;
- (id)startPageSectionsManager;
- (bool)syncEnabled;

@end
