
@interface STRestrictionsToPresetMappingViewModel : NSObject <ScreenTimeSettingsUI.STRestrictionsToPresetMappingViewModelProtocol> {
    <STRestrictionsDataSourceProtocol> * _restrictionsDataSource;
}

@property (retain) <STRestrictionsDataSourceProtocol> *restrictionsDataSource;

+ (id)boolPresetKeys;
+ (id)presetKeys;

- (void).cxx_destruct;
- (id)_presetForValuesByRestriction:(id)arg1;
- (id)_restrictionsWithValuesByRestriction:(id)arg1 presetKeys:(id)arg2;
- (id)initWithRestrictionsDataSource:(id)arg1;
- (void)loadPresetMatchingCurrentRestrictionsWithCompletionHandler:(id /* block */)arg1;
- (id)restrictionsDataSource;
- (void)setRestrictionsDataSource:(id)arg1;

@end
