
@interface ISGraphicSymbolDescriptor : IFGraphicSymbolDescriptor {
    ISResourceProvider * __resourceProvider;
    NSURL * __url;
}

@property (retain) ISResourceProvider *_resourceProvider;
@property (retain) NSURL *_url;
@property (readonly) bool placeholder;

+ (id)descriptorFromGraphicIconConfiguration:(id)arg1;
+ (id)descriptorFromGraphicSymbolRecipe:(id)arg1;

- (void).cxx_destruct;
- (id)_resourceProvider;
- (id)_url;
- (id)description;
- (bool)placeholder;
- (void)set_resourceProvider:(id)arg1;
- (void)set_url:(id)arg1;

@end
