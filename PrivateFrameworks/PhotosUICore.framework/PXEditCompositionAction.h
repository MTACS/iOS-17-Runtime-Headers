
@interface PXEditCompositionAction : PXAction {
    NSString * _actionNameLocalizationKey;
    PICompositionController * _compositionController;
    NSString * _localizedActionName;
}

@property (nonatomic, copy) NSString *actionNameLocalizationKey;
@property (nonatomic, readonly) PICompositionController *compositionController;
@property (nonatomic, copy) NSString *localizedActionName;
@property (nonatomic, readonly) NUComposition *sourceComposition;
@property (nonatomic, readonly) NUComposition *targetComposition;

- (void).cxx_destruct;
- (void)_applyComposition:(id)arg1;
- (id)actionNameLocalizationKey;
- (id)compositionController;
- (id)init;
- (id)initWithCompositionController:(id)arg1;
- (id)localizedActionName;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setActionNameLocalizationKey:(id)arg1;
- (void)setLocalizedActionName:(id)arg1;
- (id)sourceComposition;
- (id)targetComposition;

@end
