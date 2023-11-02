
@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate> {
    RadiosPreferences * _radioPreferences;
}

@property (nonatomic, retain) RadiosPreferences *radioPreferences;

- (void).cxx_destruct;
- (bool)_isDataSwitchAutomatic:(id)arg1;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)getLogger;
- (id)init;
- (id)radioPreferences;
- (void)reloadCache;
- (void)setRadioPreferences:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
