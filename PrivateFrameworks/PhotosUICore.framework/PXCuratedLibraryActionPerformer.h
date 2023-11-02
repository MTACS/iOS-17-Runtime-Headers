
@interface PXCuratedLibraryActionPerformer : PXActionPerformer {
    long long  _actionZoomLevel;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (nonatomic, readonly) long long actionZoomLevel;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

- (void).cxx_destruct;
- (long long)actionZoomLevel;
- (id)activitySystemImageName;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performActionWithCompletionHandler:(id /* block */)arg1;
- (id)viewModel;

@end
