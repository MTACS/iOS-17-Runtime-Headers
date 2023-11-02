
@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider> {
    <ISCompositorRecipe> * _recipe;
    NSMutableDictionary * _resourceByName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <ISCompositorRecipe> *recipe;
@property (readonly) NSMutableDictionary *resourceByName;
@property (readonly) <ISCompositorResourceProvider> *resourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResourcesFromDictionary:(id)arg1;
- (void)clearResources;
- (id)init;
- (id)initWithRecipe:(id)arg1 resources:(id)arg2;
- (id)recipe;
- (id)resourceByName;
- (id)resourceNamed:(id)arg1;
- (id)resourceProvider;
- (void)setRecipe:(id)arg1;
- (void)setResource:(id)arg1 forName:(id)arg2;

@end
