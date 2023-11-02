
@interface CACarPlayRegionLayer : CALayer

@property (copy) NSString *identifier;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (id)identifier;
- (void)setIdentifier:(id)arg1;

@end
