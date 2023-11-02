
@interface PKMetalUnpurgeableStrokeRenderCache : PKMetalStrokeRenderCache {
    NSMutableSet * _lockedResourceSet;
}

- (void).cxx_destruct;
- (void)addBuffer:(id)arg1;
- (void)addSecondaryBuffer:(id)arg1;
- (void)dealloc;
- (id)initWithInk:(id)arg1 renderZoomFactor:(long long)arg2;

@end
