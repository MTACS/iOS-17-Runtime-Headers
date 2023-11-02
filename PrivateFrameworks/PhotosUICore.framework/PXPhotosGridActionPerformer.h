
@interface PXPhotosGridActionPerformer : PXActionPerformer {
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) PXContentFilterState *currentContentFilterState;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

+ (bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;

- (void).cxx_destruct;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)currentContentFilterState;
- (id)initWithActionType:(id)arg1;
- (id)initWithViewModel:(id)arg1 actionType:(id)arg2;
- (long long)menuElementState;
- (id)viewModel;

@end
