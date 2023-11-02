
@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXReusableObject, PXSectionedDataSourceManagerObserver, PXUIViewBasicTile> {
    unsigned long long  _activityType;
    PXCMMPosterBannerView * _bannerView;
    <PXCMMBannerTileControllerDelegate> * _delegate;
    <PXAssetImportStatusManager> * _importStatusManager;
    NSArray * _localizedNames;
    PXMomentShareStatusPresentation * _momentShareStatusPresentation;
    PXPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    unsigned long long  _sourceType;
    PXCMMViewModel * _viewModel;
}

@property (nonatomic, retain) PXCMMPosterBannerView *bannerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMBannerTileControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)new;

- (void).cxx_destruct;
- (void)_configureBannerViewActionButtonWithTitle:(id)arg1;
- (void)_handleButtonActionWithTitle:(id)arg1;
- (void)_updateBannerActionButton;
- (void)_updateContainsUnverifierPersons;
- (void)_updateCounts;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateLocalizedNamesByViewModel;
- (void)_updatePeopleSuggestionNames;
- (id)bannerView;
- (void)becomeReusable;
- (id)delegate;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)init;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 momentShareStatusPresentation:(id)arg4 importStatusManager:(id)arg5;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleSuggestionsDataSourceManager;
- (void)prepareForReuse;
- (void)setBannerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (id)view;

@end
