
@interface ScreenTimeSettingsUI.SettingsPresetViewModel : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _availablePresets;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _ratings;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _restrictions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedPresetIndex;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showLoadingIndicator;
    void agePresetsAnalytics;
    void childAge;
    void dsid;
    void isInitialSetup;
    void restrictionsDataSource;
    void restrictionsToPresetMappingViewModel;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDsid:(id)arg1 childAge:(id)arg2 isInitialSetup:(bool)arg3 restrictionsToPresetMappingViewModel:(id)arg4 restrictionsDataSource:(id)arg5 agePresetsAnalytics:(id)arg6;
- (void)loadWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
