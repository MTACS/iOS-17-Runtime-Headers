
@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray * _buffers;
    PKInk * _ink;
    long long  _renderZoomFactor;
    NSMutableArray * _secondaryBuffers;
    unsigned long long  _totalCost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cacheCost;
- (bool)isCompatibleWithInk:(id)arg1 renderZoomFactor:(long long)arg2;
- (bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (bool)needsCompute;

@end
