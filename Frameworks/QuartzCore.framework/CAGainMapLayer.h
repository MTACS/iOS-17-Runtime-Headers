
@interface CAGainMapLayer : CALayer

@property (copy) NSString *renderMode;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)renderMode;
- (void)setRenderMode:(id)arg1;

@end
