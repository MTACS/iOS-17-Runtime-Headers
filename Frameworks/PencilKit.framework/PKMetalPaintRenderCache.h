
@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray * _buffers;
    bool  _purgeableBuffers;
    long long  _renderZoomFactor;
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
