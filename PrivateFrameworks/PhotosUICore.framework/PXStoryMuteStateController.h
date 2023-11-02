
@interface PXStoryMuteStateController : PXStoryController <PXChangeObserver> {
    PXStoryModel * _mainModel;
    <PXUserDefaultsDataSource> * _userDefaults;
    PXStoryViewModel * _viewModel;
    PXVolumeController * _volumeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXStoryModel *mainModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXUserDefaultsDataSource> *userDefaults;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;
@property (nonatomic, readonly) PXVolumeController *volumeController;

- (void).cxx_destruct;
- (void)_invalidateMainModel;
- (void)_saveMutedStatePreference;
- (void)_updateMainModel;
- (void)configureUpdater:(id)arg1;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1 volumeController:(id)arg2 userDefaults:(id)arg3;
- (id)mainModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setMainModel:(id)arg1;
- (id)userDefaults;
- (id)viewModel;
- (id)volumeController;

@end
