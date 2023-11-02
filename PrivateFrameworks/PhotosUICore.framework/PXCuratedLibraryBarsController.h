
@interface PXCuratedLibraryBarsController : PXBarsController <PXActionPerformerDelegate, PXChangeObserver> {
    PXActionPerformer * _activeActionPerformer;
    double  _interbuttonSpacing;
    PXActionPerformer * _lastActionPerformer;
    UILabel * _selectModeCaptionLabel;
    UIButton * _selectModeChevronButton;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (nonatomic, retain) PXActionPerformer *activeActionPerformer;
@property (nonatomic, readonly) PXBarAppearance *barAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interbuttonSpacing;
@property (nonatomic, retain) PXActionPerformer *lastActionPerformer;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) UILabel *selectModeCaptionLabel;
@property (nonatomic, readonly) UIButton *selectModeChevronButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_applyZoomLevel:(long long)arg1;
- (id)_defaultToolbarItemIdentifiers;
- (id)_identifierForActionType:(id)arg1;
- (void)_invalidateToolbarItems;
- (id)_selectionModeIdentifier;
- (void)_updateSelectModeCaption;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)activeActionPerformer;
- (id)barAppearance;
- (id)createAssetActionManagerForAssetReference:(id)arg1;
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (id)curatedLibraryViewController;
- (double)fixedSpaceForInterButtonSpacing;
- (void)handleCancelBarButtonItem:(id)arg1;
- (void)handleSelectBarButtonItem:(id)arg1;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)init;
- (id)initWithCuratedLibraryViewController:(id)arg1 viewModel:(id)arg2;
- (double)interbuttonSpacing;
- (id)lastActionPerformer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentationEnvironmentForActionPerformer:(id)arg1;
- (double)progressToastPaddingForActionPerformer:(id)arg1;
- (id)progressToastViewControllerForActionPerformer:(id)arg1;
- (id)rightBarButtonItemIdentifiers;
- (id)selectModeCaptionLabel;
- (id)selectModeChevronButton;
- (void)setActiveActionPerformer:(id)arg1;
- (void)setInterbuttonSpacing:(double)arg1;
- (void)setLastActionPerformer:(id)arg1;
- (id)toolbarItemIdentifiers;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)updateBars;
- (id)viewModel;

@end
