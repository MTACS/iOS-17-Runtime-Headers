
@interface PXEditSessionAction : PXEditBatchAction {
    NSString * _localizedActionName;
    NSString * _redoMenuItemTitle;
    id  _sourcePreset;
    id  _targetPreset;
    NSString * _undoMenuItemTitle;
}

@property (nonatomic, copy) NSString *localizedActionName;
@property (nonatomic, readonly) id sourcePreset;
@property (nonatomic, readonly) id targetPreset;

- (void).cxx_destruct;
- (void)_applyPreset:(id)arg1 actionName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPresetManager:(id)arg1 asset:(id)arg2 sourcePreset:(id)arg3 targetPreset:(id)arg4 syncProgress:(id)arg5 asyncLoadingStatusManager:(id)arg6;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)registerWithUndoManager:(id)arg1;
- (void)setLocalizedActionName:(id)arg1;
- (id)sourcePreset;
- (id)targetPreset;

@end
