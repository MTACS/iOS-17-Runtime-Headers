
@interface PXStoryPersistableRecipeAssetsProducer : NSObject <PXStoryAssetsProducer> {
    <PFStoryRecipe> * _persistableRecipe;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <PFStoryRecipe> *persistableRecipe;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistableRecipe:(id)arg1;
- (id)persistableRecipe;
- (id)requestAssetsWithOptions:(unsigned long long)arg1 storyQueue:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)workQueue;

@end
