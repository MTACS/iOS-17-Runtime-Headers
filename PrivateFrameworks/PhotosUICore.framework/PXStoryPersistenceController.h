
@interface PXStoryPersistenceController : PXStoryController <PXStoryDiagnosticHUDContentProvider> {
    PXStoryConfiguration * _configuration;
    NSError * _error;
    <PXStoryErrorReporter> * _errorReporter;
    bool  _isActive;
    PXStoryModel * _model;
    <PFStoryRecipe> * _persistableRecipe;
    PXStoryPersistableRecipeManager * _persistableRecipeManager;
    bool  _persisted;
    PXStoryRecipeAssetEdits * _recipeAssetEdits;
    <PXStoryPersistableRecipeWriter> * _writer;
    NSProgress * _writerProgress;
}

@property (nonatomic, retain) PXStoryConfiguration *configuration;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, retain) <PFStoryRecipe> *persistableRecipe;
@property (nonatomic, retain) PXStoryPersistableRecipeManager *persistableRecipeManager;
@property (nonatomic) bool persisted;
@property (nonatomic, retain) PXStoryRecipeAssetEdits *recipeAssetEdits;
@property (nonatomic, readonly) <PXStoryPersistableRecipeWriter> *writer;
@property (nonatomic, retain) NSProgress *writerProgress;

- (void).cxx_destruct;
- (void)_ensureWriter;
- (void)_handleWriteSuccess:(bool)arg1 createdAssetCollection:(id)arg2 error:(id)arg3 forPersistableRecipe:(id)arg4 recipeAssetEdits:(id)arg5;
- (void)_invalidatePersistableRecipe;
- (void)_invalidatePersistableRecipeManager;
- (void)_invalidateRecipeAssetEdits;
- (void)_invalidateWrite;
- (void)_updatePersistableRecipe;
- (void)_updatePersistableRecipeManager;
- (void)_updateRecipeAssetEdits;
- (void)_updateWrite;
- (id)configuration;
- (void)configureUpdater:(id)arg1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (id)error;
- (id)errorReporter;
- (id)initWithModel:(id)arg1;
- (id)initWithObservableModel:(id)arg1;
- (bool)isActive;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)persistableRecipe;
- (id)persistableRecipeManager;
- (bool)persisted;
- (id)recipeAssetEdits;
- (void)setConfiguration:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setPersistableRecipe:(id)arg1;
- (void)setPersistableRecipeManager:(id)arg1;
- (void)setPersisted:(bool)arg1;
- (void)setRecipeAssetEdits:(id)arg1;
- (void)setWriterProgress:(id)arg1;
- (id)writer;
- (id)writerProgress;

@end
