
@interface PTUIEditingServer : NSObject <PTChoiceRowDataSource, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver> {
    <PTEditingServerDataSource> * _dataSource;
    <PTEditingServerDelegate> * _delegate;
    NSArray * _domainGroupNames;
    NSMutableDictionary * _domainIDsByGroupName;
    NSDictionary * _domainInfoByID;
    bool  _forRemoteEditing;
    NSMapTable * _moduleControllerByDomainID;
    NSMutableDictionary * _proxyDefinitionsByDomainID;
    NSMutableDictionary * _rootSettingsByDomainID;
    NSMutableDictionary * _testRecipeIDsByDomainID;
    NSDictionary * _testRecipeInfoByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forRemoteEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateDomainsWithOneOrMoreTestRecipesUsingBlock:(id /* block */)arg1;
- (id)_loadRootSettingsOrProxyForDomainID:(id)arg1;
- (id)_recipeIDForRow:(long long)arg1 inSection:(long long)arg2;
- (id)_settingsDomainGroupModule:(id)arg1;
- (id)_settingsDomainRow:(id)arg1;
- (id)_settingsGroupRow:(id)arg1;
- (id)_settingsSection;
- (id)_testRecipeSection;
- (long long)choiceRow:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)choiceRow:(id)arg1 shortTitleForRow:(long long)arg2 inSection:(long long)arg3;
- (id)choiceRow:(id)arg1 titleForRow:(long long)arg2 inSection:(long long)arg3;
- (id)choiceRow:(id)arg1 titleForSection:(long long)arg2;
- (id)choiceRow:(id)arg1 valueForRow:(long long)arg2 inSection:(long long)arg3;
- (id)displayNameForDomainID:(id)arg1;
- (id)domainGroupNames;
- (id)domainIDForRootSettings:(id)arg1;
- (id)domainIDsInGroup:(id)arg1;
- (bool)forRemoteEditing;
- (id)groupNameForDomainID:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 forRemoteEditing:(bool)arg3;
- (long long)numberOfSectionsForChoiceRow:(id)arg1;
- (void)proxyDefinitionChanged:(id)arg1;
- (void)reloadDomains;
- (void)reloadTestRecipes;
- (id)rootSettingsForDomainID:(id)arg1;
- (void)setForRemoteEditing:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)settingsDidRestoreDefaults:(id)arg1;
- (id)settingsEditingModule;
- (void)settingsWillRestoreDefaults:(id)arg1;
- (id)testRecipeIDsForDomainID:(id)arg1;
- (id)testRecipeSelectionModule;
- (id)titleForTestRecipeID:(id)arg1;

@end
