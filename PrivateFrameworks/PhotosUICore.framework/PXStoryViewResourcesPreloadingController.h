
@interface PXStoryViewResourcesPreloadingController : PXStoryController <PXStoryDiagnosticHUDContentProvider> {
    bool  _isActive;
    NSMapTable * _resourcesPreloadingControllers;
    PXStoryResourcesPreloadingCoordinator * _resourcesPreloadingCoordinator;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) NSMapTable *resourcesPreloadingControllers;
@property (nonatomic, readonly) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateResourcesPreloadingControllers;
- (void)_updateResourcesPreloadingControllers;
- (void)configureUpdater:(id)arg1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (bool)isActive;
- (id)resourcesPreloadingControllerForModel:(id)arg1;
- (id)resourcesPreloadingControllers;
- (id)resourcesPreloadingCoordinator;
- (void)setIsActive:(bool)arg1;
- (id)viewModel;

@end
