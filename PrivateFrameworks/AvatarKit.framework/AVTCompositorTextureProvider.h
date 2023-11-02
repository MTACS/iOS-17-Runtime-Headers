
@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider> {
    unsigned long long  _componentDirtyMask;
    AVTCompositor * _compositor;
    NSMutableSet * _helperTokens;
    AVTMemoji * _memoji;
    AVTCompositorPipeline * _pipeline;
    NSString * _propertyName;
    bool  _skinIsDirty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)componentDidChangeForTypes:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3;
- (id)newTextureForDevice:(id)arg1;
- (void)renderToTexture:(id)arg1 computeCommandHandler:(id /* block */)arg2 blitCommandHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4 helper:(id)arg5;
- (void)skinColorDidChange;

@end
