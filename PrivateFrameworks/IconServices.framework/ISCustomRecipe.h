
@interface ISCustomRecipe : NSObject <ISCompositorResourceProvider> {
    NSDictionary * _bitmapResources;
    IFBundle * _bundle;
    <ISCompositorRecipe> * _recipe;
    NSDictionary * _symbolResources;
}

@property (readonly) NSDictionary *bitmapResources;
@property (readonly) IFBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <ISCompositorRecipe> *recipe;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *symbolResources;

+ (id)customRecipeWithInfo:(id)arg1 bundle:(id)arg2;

- (void).cxx_destruct;
- (id)bitmapResources;
- (id)bundle;
- (id)initWithRecipe:(id)arg1 bitmapResources:(id)arg2 symbolResources:(id)arg3 bundle:(id)arg4;
- (id)recipe;
- (id)resourceNamed:(id)arg1;
- (id)symbolResources;

@end
