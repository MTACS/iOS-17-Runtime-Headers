
@interface SBExternalDefaults : SBAbstractDefaults {
    SBExternalChronoDefaults * _chronoDefaults;
    SBBiometricKitDefaults * _lazy_biometricKitDefaults;
    SBExternalChronoDefaults * _lazy_chronoDefaults;
    SBExternalDemoDefaults * _lazy_demoDefaults;
    SBExternalDuetDefaults * _lazy_duetDefaults;
    SBExternalGlobalDefaults * _lazy_globalDefaults;
    SBExternalWifiDefaults * _lazy_networkDefaults;
    SBExternalNotesDefaults * _lazy_notesDefaults;
    SBExternalPhoneDefaults * _lazy_phoneDefaults;
    SBExternalSettingsDefaults * _lazy_settingsDefaults;
    SBExternalSetupDefaults * _lazy_setupDefaults;
    SBExternalSoundsDefaults * _lazy_soundDefaults;
}

@property (nonatomic, readonly, retain) SBBiometricKitDefaults *biometricKitDefaults;
@property (nonatomic, readonly, retain) SBExternalChronoDefaults *chronoDefaults;
@property (nonatomic, readonly, retain) SBExternalDemoDefaults *demoDefaults;
@property (nonatomic, readonly, retain) SBExternalDuetDefaults *duetDefaults;
@property (nonatomic, readonly, retain) SBExternalGlobalDefaults *globalDefaults;
@property (nonatomic, readonly, retain) SBExternalWifiDefaults *networkDefaults;
@property (nonatomic, readonly, retain) SBExternalNotesDefaults *notesDefaults;
@property (nonatomic, readonly, retain) SBExternalPhoneDefaults *phoneDefaults;
@property (nonatomic, readonly, retain) SBExternalSettingsDefaults *settingsDefaults;
@property (nonatomic, readonly, retain) SBExternalSetupDefaults *setupDefaults;
@property (nonatomic, readonly, retain) SBExternalSoundsDefaults *soundDefaults;

+ (id)chronoDefaults;

- (void).cxx_destruct;
- (id)biometricKitDefaults;
- (id)chronoDefaults;
- (id)demoDefaults;
- (id)duetDefaults;
- (id)globalDefaults;
- (id)networkDefaults;
- (id)notesDefaults;
- (id)phoneDefaults;
- (id)settingsDefaults;
- (id)setupDefaults;
- (id)soundDefaults;

@end
