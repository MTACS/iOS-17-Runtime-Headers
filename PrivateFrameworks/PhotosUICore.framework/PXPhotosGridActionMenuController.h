
@interface PXPhotosGridActionMenuController : PXActionMenuController {
    NSArray * _additionalActionTypes;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, copy) NSArray *additionalActionTypes;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (id)additionalActionTypes;
- (id)availableActionTypes;
- (id)availableHeaderActionTypes;
- (id)availableInternalActionTypes;
- (id)initWithActionManagers:(id)arg1;
- (id)initWithActionManagers:(id)arg1 viewModel:(id)arg2;
- (void)setAdditionalActionTypes:(id)arg1;
- (bool)shouldAllowPerformanceOfActionType:(id)arg1;
- (id)viewModel;

@end
