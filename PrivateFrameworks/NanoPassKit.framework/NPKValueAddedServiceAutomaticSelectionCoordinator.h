
@interface NPKValueAddedServiceAutomaticSelectionCoordinator : NSObject <NPKPassesDataSourceObserver> {
    <NPKPassesDataSource> * _dataSource;
    <NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> * _delegate;
}

@property (nonatomic) <NPKPassesDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKValueAddedServiceAutomaticSelectionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleWalletPreferencesChanged:(id)arg1;
- (void)_updateAutomaticSelectionPasses;
- (id)dataSource;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 passesDataSource:(id)arg2;
- (void)passesDataSource:(id)arg1 didAddPasses:(id)arg2;
- (void)passesDataSource:(id)arg1 didRemovePasses:(id)arg2;
- (void)passesDataSource:(id)arg1 didUpdatePasses:(id)arg2;
- (void)passesDataSource:(id)arg1 didUpdateSettingsForPass:(id)arg2;
- (void)passesDataSourceDidReloadPasses:(id)arg1;
- (void)passesDataSourceDidReorderPasses:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
