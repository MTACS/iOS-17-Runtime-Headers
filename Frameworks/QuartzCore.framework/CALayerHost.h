
@interface CALayerHost : CALayer {
    float  _asynchronousRenderMaxAPL;
    float  _asynchronousRenderMaxAPLStrength;
}

@property bool asynchronousOpaque;
@property float asynchronousRenderMaxAPL;
@property float asynchronousRenderMaxAPLStrength;
@property double asynchronousRenderPeriod;
@property (copy) NSArray *asynchronousRenderTimes;
@property unsigned int contextId;
@property bool inheritsSecurity;
@property bool preservesFlip;
@property bool rendersAsynchronously;
@property bool resizesHostedContext;
@property bool stopsHitTestTransformAccumulation;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)allLayerHosts;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (bool)asynchronousOpaque;
- (float)asynchronousRenderMaxAPL;
- (float)asynchronousRenderMaxAPLStrength;
- (double)asynchronousRenderPeriod;
- (id)asynchronousRenderTimes;
- (unsigned int)contextId;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (bool)inheritsSecurity;
- (id)init;
- (void)layerDidBecomeVisible:(bool)arg1;
- (bool)preservesFlip;
- (bool)rendersAsynchronously;
- (bool)resizesHostedContext;
- (void)setAsynchronousOpaque:(bool)arg1;
- (void)setAsynchronousRenderMaxAPL:(float)arg1;
- (void)setAsynchronousRenderMaxAPLStrength:(float)arg1;
- (void)setAsynchronousRenderPeriod:(double)arg1;
- (void)setAsynchronousRenderTimes:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setInheritsSecurity:(bool)arg1;
- (void)setPreservesFlip:(bool)arg1;
- (void)setRendersAsynchronously:(bool)arg1;
- (void)setResizesHostedContext:(bool)arg1;
- (void)setStopsHitTestTransformAccumulation:(bool)arg1;
- (bool)stopsHitTestTransformAccumulation;

@end
