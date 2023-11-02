
@interface PXStoryNullPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter> {
    NSError * _error;
}

@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)writePersistableRecipe:(id)arg1 assetEdits:(id)arg2 undoManager:(id)arg3 resultHandler:(id /* block */)arg4;

@end
