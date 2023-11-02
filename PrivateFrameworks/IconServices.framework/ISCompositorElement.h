
@interface ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider> {
    NSDictionary * _additionalResources;
    <ISCompositorRecipe> * _recipe;
    <ISCompositorResourceProvider> * _resourceProvider;
}

@property (readonly) NSDictionary *additionalResources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <ISCompositorRecipe> *recipe;
@property (readonly) <ISCompositorResourceProvider> *resourceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalResources;
- (id)initWithRecipe:(id)arg1 resourceProvider:(id)arg2;
- (id)initWithRecipe:(id)arg1 resourceProvider:(id)arg2 additionalResources:(id)arg3;
- (id)recipe;
- (id)resourceForKey:(id)arg1;
- (id)resourceNamed:(id)arg1;
- (id)resourceProvider;

@end
