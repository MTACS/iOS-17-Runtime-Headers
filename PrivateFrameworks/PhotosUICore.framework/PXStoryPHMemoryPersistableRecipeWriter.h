
@interface PXStoryPHMemoryPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter> {
    PHMemory * _memory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMemory:(id)arg1;
- (id)memory;
- (id)workQueue;
- (id)writePersistableRecipe:(id)arg1 assetEdits:(id)arg2 undoManager:(id)arg3 resultHandler:(id /* block */)arg4;

@end
