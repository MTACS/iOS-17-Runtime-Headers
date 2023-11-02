
@interface ISRootSettings : ISSettings {
    ISPerformanceDiagnosticsSettings * _performanceDiagnosticsSettings;
    ISPlayerSettings * _playerSettings;
    ISVitalitySettings * _vitalitySettings;
}

@property (nonatomic, retain) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;
@property (nonatomic, retain) ISPlayerSettings *playerSettings;
@property (nonatomic, retain) ISVitalitySettings *vitalitySettings;

+ (id)_defaultsKey;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)performanceDiagnosticsSettings;
- (id)playerSettings;
- (void)save;
- (void)setDefaultValues;
- (void)setPerformanceDiagnosticsSettings:(id)arg1;
- (void)setPlayerSettings:(id)arg1;
- (void)setVitalitySettings:(id)arg1;
- (id)vitalitySettings;

@end
