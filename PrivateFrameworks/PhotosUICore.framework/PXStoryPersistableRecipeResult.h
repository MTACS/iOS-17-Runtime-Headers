
@interface PXStoryPersistableRecipeResult : NSObject {
    PXStoryMiroMemoryConverter * _miroInfo;
    <PFStoryRecipe> * _recipe;
}

@property (nonatomic, readonly) PXStoryMiroMemoryConverter *miroInfo;
@property (nonatomic, readonly) <PFStoryRecipe> *recipe;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistableRecipe:(id)arg1;
- (id)initWithPersistableRecipe:(id)arg1 miroInfo:(id)arg2;
- (id)miroInfo;
- (id)recipe;

@end
