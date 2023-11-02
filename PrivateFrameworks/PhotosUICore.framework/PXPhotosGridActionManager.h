
@interface PXPhotosGridActionManager : PXActionManager {
    NSDictionary * _actionPerformersByType;
    NSMapTable * _actionTypeByBarButtonItem;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) NSDictionary *actionPerformersByType;
@property (nonatomic, readonly) NSMapTable *actionTypeByBarButtonItem;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

+ (id)actionsWithActionPerformers;

- (void).cxx_destruct;
- (void)_handleBarButtonItem:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)actionPerformersByType;
- (id)actionTypeByBarButtonItem;
- (id)activityForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)standardActionForActionType:(id)arg1;
- (bool)supportsActionType:(id)arg1;
- (id)viewModel;

@end
