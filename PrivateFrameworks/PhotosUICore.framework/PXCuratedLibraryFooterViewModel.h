
@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXSettingsKeyObserver> {
    PXCuratedLibraryAnalysisStatus * _analysisStatus;
    long long  _animatedGridCycleIndex;
    PXCloudQuotaControllerHelper * _cloudQuotaHelper;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    PXCuratedLibraryViewModel * _curatedLibraryViewModel;
    PXFilterFooterController * _filterFooterController;
    bool  _isFooterShown;
    PXAssetsDataSourceCountsController * _itemCountsController;
    PXLibraryFilterState * _libraryFilterState;
    long long  _mode;
    PHPhotoLibrary * _photoLibrary;
    PXCPLPhotoLibrarySource * _photoLibrarySource;
    <PXCuratedLibraryFooterViewModelPresentationDelegate> * _presentingDelegate;
    PXFooterSettings * _settings;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    NSArray * _syncProgressAlbums;
}

@property (nonatomic, readonly) PXCuratedLibraryAnalysisStatus *analysisStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFooterShown;
@property (nonatomic, readonly) PXAssetsDataSourceCountsController *itemCountsController;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) <PXCuratedLibraryFooterViewModelPresentationDelegate> *presentingDelegate;
@property (nonatomic, readonly) PXFooterSettings *settings;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly) bool shouldAlternateTitleWithAnimatedGridCycle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *syncProgressAlbums;

+ (id)_titleWithOptionalDescription:(id*)arg1 progress:(float*)arg2 forMode:(long long)arg3 itemCountsController:(id)arg4 analysisStatus:(id)arg5 cplUIStatus:(id)arg6 inRebuild:(bool)arg7 reason:(id)arg8;
+ (bool)hasAnalysisProgressForMode:(long long)arg1 analysisStatus:(id)arg2 cplUIStatus:(id)arg3 userDefaults:(id)arg4 outAnimatedIconMode:(long long*)arg5 outProgress:(float*)arg6 outTitle:(id*)arg7 outDescription:(id*)arg8;

- (void).cxx_destruct;
- (void)_updateExposedPropertiesForReason:(id)arg1;
- (void)_updateHasImportantInformation;
- (id)analysisStatus;
- (void)cloudQuotaControllerHelper:(id)arg1 informationViewDidChange:(id)arg2;
- (void)didHideFooter;
- (void)didShowFooter;
- (void)footerAnimationCrossedGridCycleBoundary;
- (id)init;
- (id)initWithItemCountsController:(id)arg1 cplUIStatusProvider:(id)arg2 analysisStatus:(id)arg3 mode:(long long)arg4 viewModel:(id)arg5;
- (bool)isFooterShown;
- (id)itemCountsController;
- (id)libraryFilterState;
- (long long)mode;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (id)presentingDelegate;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg1;
- (void)setIsFooterShown:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sharedLibraryStatusProvider;
- (bool)shouldAlternateTitleWithAnimatedGridCycle;
- (id)syncProgressAlbums;

@end
