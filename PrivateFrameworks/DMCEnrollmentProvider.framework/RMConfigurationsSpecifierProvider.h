
@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider {
    <RMConfigurationsDataProvider> * _rmDataProvider;
    NSMutableArray * _sectionTitles;
    NSMutableArray * _sectionedSpecifiers;
}

@property (nonatomic, retain) <RMConfigurationsDataProvider> *rmDataProvider;
@property (nonatomic, retain) NSMutableArray *sectionTitles;
@property (nonatomic, retain) NSMutableArray *sectionedSpecifiers;

- (void).cxx_destruct;
- (id)_iconForSymbol:(short)arg1;
- (id)_isActivatedProfileText:(id)arg1;
- (id)_passcodeSpecifiers;
- (id)_pluginSpecifiers;
- (id)_profileSpecifiers;
- (id)initWithAccount:(id)arg1 rmDataProvider:(id)arg2;
- (id)rmDataProvider;
- (id)sectionTitles;
- (id)sectionedSpecifiers;
- (void)setRmDataProvider:(id)arg1;
- (void)setSectionTitles:(id)arg1;
- (void)setSectionedSpecifiers:(id)arg1;
- (id)specifiers;
- (id)specifiersReloadedNotificationName;
- (id)tableSectionCellsForSpecifiersInTableView:(id)arg1;

@end
