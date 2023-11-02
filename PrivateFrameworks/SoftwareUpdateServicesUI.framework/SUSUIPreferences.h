
@interface SUSUIPreferences : NSObject {
    bool  _alertAfterDownload;
    NSNumber * _installAlertIntervalMinutes;
    bool  _needsAlertPresentationAfterOTAUpdate;
    NSNumber * _passcodeRequiredDays;
    bool  _preventCountdownAlert;
    bool  _preventRollbackPrompt;
}

@property (nonatomic, readonly) bool alertAfterDownload;
@property (nonatomic, readonly, retain) NSNumber *installAlertIntervalMinutes;
@property (setter=setNeedsAlertPresentationAfterOTAUpdate:, nonatomic) bool needsAlertPresentationAfterOTAUpdate;
@property (nonatomic, readonly, retain) NSNumber *passcodeRequiredDays;
@property (nonatomic, readonly) bool preventCountdownAlert;
@property (nonatomic, readonly) bool preventRollbackPrompt;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_copyNumberPreferenceForKey:(id)arg1;
- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long long)arg2;
- (id)_copyStringPreferenceForKey:(id)arg1;
- (bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (void)_loadPreferences;
- (void)_setBooleanPreferenceForKey:(id)arg1 value:(bool)arg2;
- (bool)alertAfterDownload;
- (void)dealloc;
- (id)init;
- (id)installAlertIntervalMinutes;
- (bool)needsAlertPresentationAfterOTAUpdate;
- (id)passcodeRequiredDays;
- (bool)preventCountdownAlert;
- (bool)preventRollbackPrompt;
- (void)setNeedsAlertPresentationAfterOTAUpdate:(bool)arg1;

@end
