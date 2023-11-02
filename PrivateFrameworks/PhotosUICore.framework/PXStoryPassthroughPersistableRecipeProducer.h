
@interface PXStoryPassthroughPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer> {
    <PFStoryRecipe> * _persistableRecipe;
}

@property (nonatomic, readonly) <PFStoryRecipe> *persistableRecipe;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistableRecipe:(id)arg1;
- (id)persistableRecipe;
- (id)requestPersistableRecipeWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;

@end
