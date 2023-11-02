
@interface ScreenTimeSettingsUI.STIntroPresetsViewController : OBWelcomeController {
    void continueHandler;
    void introductionModel;
    void name;
    void presetsVC;
    void restrictionsToPresetMappingViewModel;
    void settingsPresetViewModel;
    void updateExistingSettings;
}

- (void).cxx_destruct;
- (void)continue;
- (id)initWithIntroductionModel:(id)arg1 settingsPresetViewModel:(id)arg2 name:(id)arg3 updateExistingSettings:(bool)arg4 onContinue:(id /* block */)arg5;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidLoad;

@end
